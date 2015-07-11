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
    QSqlDatabase db;
    QString name;
    QString host;
    QString username;
    QString password;

public:
    /* Methods */
    VisioFaceDB(QString &_name, QString &_host, QString &_username, QString &_password);
    void createUserTable();
    ~VisioFaceDB();
};

#endif // VISIOFACEDB_H
