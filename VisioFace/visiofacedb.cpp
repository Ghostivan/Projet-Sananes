#include "visiofacedb.h"

// Init Database
VisioFaceDB::VisioFaceDB(QString &_name, QString &_host, QString &_username, QString &_password)
{
    name = _name;
    host = _host;
    username = _username;
    password = _password;

    this->db = QSqlDatabase::addDatabase("QSQLDRIVER");
    db.setHostName(_host);
    db.setDatabaseName(_name);
    db.setUserName(_username);
    db.setPassword(_password);
}

