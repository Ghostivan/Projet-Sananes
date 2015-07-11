#ifndef VISIOFACEDB_H
#define VISIOFACEDB_H
#include <QString>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>

using namespace std;
class VisioFaceDB
{
private:

    QString name;
    QString host;
    QString username;
    QString password;
    QSqlDatabase db;

public:
    /* Methods */
    void createDatabase(QString _name, QString _host, QString _username, QString _password);
    void createUser(QString _mail, QString _nom, QString _prenom);
    void setDatabase(QString _name, QString _host, QString _username, QString _password);

};

#endif // VISIOFACEDB_H
