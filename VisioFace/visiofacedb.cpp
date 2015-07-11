#include "visiofacedb.h"

// Init Database
VisioFaceDB::VisioFaceDB(QString &_name, QString &_host, QString &_username, QString &_password)
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


}
void VisioFaceDB::createUserTable(){
    if( !db.open() )
    {
      qDebug() << db.lastError();
      qFatal( "Failed to connect." );
    }
    qDebug( "Connected!" );
    QSqlQuery qry;
    qry.prepare( "CREATE TABLE IF NOT EXISTS user (id INTEGER UNIQUE PRIMARY KEY, firstname VARCHAR(30), lastname VARCHAR(30), mail VARCHAR(50))" );
    if( !qry.exec() )
      qDebug() << qry.lastError();
    else
      qDebug() << "Table created!";
}

