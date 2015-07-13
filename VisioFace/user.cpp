#include "user.h"

User::User()
{

}
User::User(int _id, QString _lastName, QString _firstName, QString _mail){
    id = _id;
    lastName = _lastName;
    firstName = _firstName;
    mail = _mail;
}
