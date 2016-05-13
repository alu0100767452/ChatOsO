QT += core
QT += gui
QT += network
QT += sql

PKGCONFIG += openssl

CONFIG += c++11

TARGET = Servidor
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    main.cpp \
    myudp.cpp \
    client.cpp \
    sslserver.cpp \
    server.cpp

DISTFILES += \
    protobuf.pri \
    protomessage.proto

PROTOS = protomessage.proto
include(protobuf.pri)

HEADERS += \
    myudp.h \
    client.h \
    sslserver.h \
    server.h


