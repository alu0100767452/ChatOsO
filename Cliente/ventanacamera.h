#ifndef VENTANACAMERA_H
#define VENTANACAMERA_H

#include <QDialog>
#include <QList>
#include <QtMultimedia>
#include <QMultimedia>
#include <QtMultimediaWidgets>
#include <QCameraInfo>
#include <QWidget>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QSettings>
#include <QString>
#include <QImageEncoderSettings>
#include <QBoxLayout>


#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#include "capturebuffer.h"
#include "perfilusers.h"

namespace Ui {
class VentanaCamera;
}

class VentanaCamera : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaCamera(QWidget *parent = 0);
    ~VentanaCamera();

private slots:


    void on_pushButtonCapturar_clicked();

    void captureError(int id ,QCameraImageCapture::Error error, QString errorString);

    void imagen_capturada();

private:
    Ui::VentanaCamera *ui;
    QCameraImageCapture* imageCapture_;
    QCamera* camera;
    QCameraViewfinder* viewfinder;
};

#endif // VENTANACAMERA_H
