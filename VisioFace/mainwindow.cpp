#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "formconnectwindows.h"
#include "formsigninwindows.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap bkgnd("background.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
    this->readJson();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::readJson()
   {
      QString val;
      QFile file;
      file.setFileName("C:\\Users\\Navi\\Documents\\VisioFace\\user.json");
      file.open(QIODevice::ReadOnly | QIODevice::Text);
      val = file.readAll();
      file.close();


      QJsonDocument d = QJsonDocument::fromJson(val.toUtf8());
      qWarning() << d.isNull();
      QJsonObject tab = d.object();
      //QJsonValue val = tab.value("first_name");
      qWarning() << "FIRST NAME TROUVE !" << val;

      /*qWarning() << "SIZE DE L'OBJET ==> " << d << "\n";
      QJsonObject sett2 = d.object();

      qWarning() << "SIZE DE L'OBJET ==> " << sett2.length() << "\n";
      QJsonValue value = sett2.value(QString("first_name"));
      qWarning() << value << "\n";
      QJsonObject item value.toObject();
      qWarning() << "QJsonObject of first_name: " << item[0];

      /* incase of string value get value and convert into string
      qWarning() << "QJsonObject[first_name]: " << item["first_name"];
      QJsonValue subobj = item["first_name"];
      qWarning() << subobj.toString();*/

      /* incase of array get array and convert into string
      qWarning() << tr("QJsonObject[last_name] of value: ") << item["last_name"];
      QJsonArray test = item["imp"].toArray();
      qWarning() << test[1].toString();*/
   }
/*
 * Evenement clique sur Inscrire
*/
void MainWindow::on_pushButton_clicked()
{
    cout<<"S'inscrire"<<endl;
    FormSignInWindows siw;
    siw.setModal(true);
    siw.exec();
}
/*
 * Evenement clique sur Connexion
*/
void MainWindow::on_connect_clicked()
{
    cout<<"Se connecter"<<endl;
    FormConnectWindows fcw;
    fcw.setModal(true);
    fcw.exec();

}
