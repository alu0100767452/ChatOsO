#ifndef CHATWINDOWS_H
#define CHATWINDOWS_H

#include "ventanaprincipal.h"
#include "my_socket_cliente.h"
#include "sys/stat.h"

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class ChatWindows;
}

class ChatWindows : public QDialog
{
    Q_OBJECT

public:
    explicit ChatWindows(bool crear_sala, QString name_sala, My_Socket_Cliente* socket, QWidget *parent = 0);
    ~ChatWindows();
    Message deserializar();

signals:
    void logueado();
    void noLogueado();

public slots:
    void readyRead();
    void cerrando();

private slots:
    void on_pushButtonDesconectar_clicked();

    void on_pushButtonSalir_clicked();

    void on_lineEditTexTenv_returnPressed();

    void on_pushButtonConectar_clicked();

private:
    Ui::ChatWindows *ui;
    bool isConnected;
    bool crearsala_;
    quint32 tamPacket;
    QString namesala;
    My_Socket_Cliente *mySocket;

};

#endif // CHATWINDOWS_H
