#ifndef CHATWINDOWS_H
#define CHATWINDOWS_H

#include <QDialog>

namespace Ui {
class ChatWindows;
}

class ChatWindows : public QDialog
{
    Q_OBJECT

public:
    explicit ChatWindows(QWidget *parent = 0);
    ~ChatWindows();


private slots:
    void on_pushButtonDesconectar_clicked();

    void on_pushButtonSalir_clicked();

private:
    Ui::ChatWindows *ui;
};

#endif // CHATWINDOWS_H
