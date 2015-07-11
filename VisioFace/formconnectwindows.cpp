#include "mainwindow.h"
#include "formconnectwindows.h"
#include "ui_formconnectwindows.h"

FormConnectWindows::FormConnectWindows(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormConnectWindows)
{
    ui->setupUi(this);
    this->readJson();
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
      //QJsonObject tab = d.object();

      //QJsonValue value = tab.value("first_name");
      //qWarning() << value;
      //QJsonObject item = value.toObject();
      /* incase of string value get value and conv5ert into string*/
      //qWarning() << tr("QJsonObject[appName] of description: ") << item["description"];
      //QJsonValue subobj = item["description"];
      //qWarning() << subobj.toString();


      //QJsonValue val = tab.value("first_name");
      //qDebug() << tab["id"].toString();

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
