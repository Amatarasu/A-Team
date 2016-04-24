#ifndef USER_H
#define USER_H
#include "allheadertoinclude.h"

using namespace std;

class User
{
public:
    //template<typename Archive>
    User();
    User(QString uName, QString pass, QString fName, QString lName, QString quest, QString ans);
    template<typename Archive>
    void serialize(Archive& ar, const unsigned version);
   // template<typename Archive>
   // void serout(Archive& ar, const unsigned version);
    void save();
    void open(QString user);


//private:
    struct userInfo{// : public Serializable{
        QString uName;
        QString pass;
        QString fName;
        QString lName;
        QString quest;
        QString ans;
        int wins;
        int loss;
        int ties;
    } info;

    //void decrypt();
    void encrypt();
};

#endif // USER_H
