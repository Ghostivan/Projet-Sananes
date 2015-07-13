#ifndef USER_H
#define USER_H
#include <QString>

class User
{
private:
    int id;
    QString mail;
public:
    QString lastName;
    QString firstName;
    User();
    User(int _id, QString _lastName, QString _firstName, QString _mail );
};

#endif // USER_H
