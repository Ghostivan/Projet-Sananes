#include "mainwindow.h"
#include "formconnectwindows.h"
#include "ui_formconnectwindows.h"
#include "visiofacedb.h"
#include "user.h"
#include <QDebug>

FormConnectWindows::FormConnectWindows(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormConnectWindows)
{
    ui->setupUi(this);
    this->displayUsers();
}

FormConnectWindows::~FormConnectWindows()
{
    delete ui;
}

void FormConnectWindows::on_pushButton_clicked()
{
    /*
     * --- CREATION FOLDER USER WITH MAIL ---
     *  string mail = ui->textEdit->toPlainText().toUtf8().constData();
        cout<<"Connect to "<<mail<<endl;
        mail = "usr/"+mail;
        mkdir(mail.data());
     *
     */
}
void FormConnectWindows::displayUsers(){
    // Ajout de l'utilisateur
    VisioFaceDB db;
    QString dbname="visioface";
    QString host="localhost";
    QString user="root";
    QString mdp="";
    db.createDatabase(dbname,host ,user,mdp);
    QList<User> list = db.getAllUser();
    foreach (User usr, list) {
        qDebug() << usr.lastName;
        ui->comboBox->addItem(usr.lastName);
    }
}

/* VERSION PERSISTANCE JSON
void FormConnectWindows::readJson()
   {
      QString val;
      QFile file;
      file.setFileName("C:\\Users\\Navi\\Documents\\VisioFace\\user.json");
      file.open(QIODevice::ReadOnly | QIODevice::Text);
      val = file.readAll();
      file.close();


      QJsonDocument d = QJsonDocument::fromJson(val.toUtf8());
      qWarning() << d.isNull();
      QJsonArray array = d.array();

      for(int i=0; i<array.count();i++){
        QJsonObject obj = array[i].toObject();
        qWarning() << obj["first_name"];
        ui->comboBox->addItem(obj["first_name"].toString());

      }
   }
*/
