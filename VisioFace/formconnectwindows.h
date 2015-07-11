#ifndef FORMCONNECTWINDOWS_H
#define FORMCONNECTWINDOWS_H

#include <QDialog>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonArray>
#include <QFile>
#include <QDebug>
#include <QtDebug>
#include <iostream>
#include <QtGui>
#include <QStringList>
#include <QByteArray>

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
    void readJson();
    void on_pushButton_clicked();

private:
    Ui::FormConnectWindows *ui;
};

#endif // FORMCONNECTWINDOWS_H
