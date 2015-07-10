#ifndef FORMCONNECTWINDOWS_H
#define FORMCONNECTWINDOWS_H

#include <QDialog>

namespace Ui {
class FormConnectWindows;
}

class FormConnectWindows : public QDialog
{
    Q_OBJECT

public:
    explicit FormConnectWindows(QWidget *parent = 0);
    ~FormConnectWindows();

private slots:
    void on_pushButton_clicked();

private:
    Ui::FormConnectWindows *ui;
};

#endif // FORMCONNECTWINDOWS_H
