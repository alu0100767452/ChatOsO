#include "sslserver.h"

#include <QSslSocket>
#include <QSslCertificate>
#include <QSslKey>
#include <syslog.h>

SslServer::SslServer(QString dir, quint16 port, QSqlDatabase *db, QObject *parent):
    QTcpServer(parent),
    db(db),
    dir_(dir),
    port_(port)
{

}

SslServer::~SslServer()
{
    delete server;
    db->close();
    delete db;
}


void SslServer::incomingConnection(qintptr socketDescriptor){

    QSslSocket* socket = new QSslSocket();

    if(socket->setSocketDescriptor(socketDescriptor)){
        connect(socket, SIGNAL(sslErrors(QList<QSslError>)), socket, SLOT(ignoreSslErrors()));
        socket->setProtocol(QSsl::TlsV1_1);
        socket->setPrivateKey("/etc/ServidorChatOsO/Certificados/server.key");
        socket->setLocalCertificate("/etc/ServidorChatOsO/Certificados/server.crt");
        socket->ignoreSslErrors();

        Client *client = new Client(socket, db, this);
        socket->startServerEncryption();
    }
    else{
        delete socket;
    }

}


