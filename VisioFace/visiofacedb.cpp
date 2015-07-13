#include "visiofacedb.h"
#include <QtSql>
#include <QList>
#include "user.h"

// Init Database
/*
VisioFaceDB::VisioFaceDB( QString _name, QString _host, QString _username, QString _password)
{
    name = _name;
    host = _host;
    username = _username;
    password = _password;

    this->db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(_host);
    db.setDatabaseName(_name);
    db.setUserName(_username);
    db.setPassword(_password);


}*/

void VisioFaceDB::createDatabase(QString _name, QString _host, QString _username, QString _password)
{
    name = _name;
    host = _host;
    username = _username;
    password = _password;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(_host);
    db.setDatabaseName(_name);
    db.setUserName(_username);
    db.setPassword(_password);
}

void VisioFaceDB::setDatabase(QString _name, QString _host, QString _username, QString _password)
{
    this->name=_name;
    this->host=_host;
    this->username=_username;
    this->password=_password;
}


bool VisioFaceDB::createUser(QString _mail, QString _nom, QString _prenom )
{
    if( !db.open() )
    {
        qDebug() << db.lastError();
        qFatal( "Failed to connect." );
    }
    else
    {

        QSqlQuery qry;
        qDebug() << "INSERT INTO user (id, nom, prenom, mail) VALUES ('', '"+_nom+"', '"+_prenom+"', '"+_mail+"')";
        QList<User> list = db.getAllUser();
        bool bUserExist=false;
        foreach (User usr, list) {
            if(usr.mail==_mail)
            {
               bUserExist=true;
               return false;
            }
        }
        if(bUserExist==false)
        {
            qry.prepare("INSERT INTO user (id, nom, prenom, mail) VALUES ('', '"+_nom+"', '"+_prenom+"', '"+_mail+"')");
            if( !qry.exec() )
            {
                qDebug() << qry.lastError();
            }
            else
            {
              qDebug( "User inserer dans la bdd." );
              return true;
            }
        }


    }
}
QList<User> VisioFaceDB::getAllUser(){
    QList<User> listUser;

    if( !db.open() )
    {
        qDebug() << db.lastError();
        qFatal( "Failed to connect." );
        return listUser;
    }
    else
    {
        QSqlQuery qry;
        qry.exec("SELECT * FROM user");
        while(qry.next()) {
            int id = qry.value(0).toInt();
            QString lastName = qry.value(1).toString();
            QString firstName = qry.value(2).toString();
            QString mail = qry.value(3).toString();
            qDebug() << "\nID" << id <<"\nFirst Name: " << firstName << "\nLast Name:" << lastName << "\nMail" << mail;
            listUser.append(User(id,lastName,firstName,mail));
        }
        return listUser;
    }
}

