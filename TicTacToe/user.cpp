#include "allheadertoinclude.h"

using namespace std;

string uName, pass, fName, lName, quest, ans;

User::User(){}
User::User(QString uName, QString pass, QString fName, QString lName, QString quest, QString ans){
    info.uName = uName;
    info.pass = pass;
    info.fName = fName;
    info.lName = lName;
    info.quest = quest;
    info.ans = ans;
    info.wins = 0;
    info.loss = 0;
    info.ties = 0;
}


void User::save(){
    uName = info.uName.toStdString();
    pass = info.pass.toStdString();
    fName = info.fName.toStdString();
    lName = info.lName.toStdString();
    quest = info.quest.toStdString();
    ans = info.ans.toStdString();
    encrypt();
    ofstream ofs(("Users/" + info.uName.toStdString()).c_str(), ios::binary);
    ofs << uName << endl << pass << endl << fName << endl << lName << endl << quest
        << endl << ans << endl << info.wins << endl << info.loss << endl << info.ties;
}

void User::open(QString user){
    ifstream ifs(("Users/" + user.toStdString()).c_str(), ios::binary);
    ifs >> uName >> pass >> fName >> lName >> quest >> ans >> info.wins >> info.loss >> info.ties;
    encrypt();
    info.uName = QString::fromStdString(uName);
    info.pass = QString::fromStdString(pass);
    info.fName = QString::fromStdString(fName);
    info.lName = QString::fromStdString(lName);
    info.quest = QString::fromStdString(quest);
    info.ans = QString::fromStdString(ans);
}

void User::encrypt(){
    string key = "Suck it Ibra!";
    while (key.size() < uName.size())
        key += key;
    for (int i = 0; i < uName.size(); ++i)
        uName[i] ^= key[i];

    while (key.size() < pass.size())
        key += key;
    for (int i = 0; i < pass.size(); ++i)
        pass[i] ^= key[i];

    while (key.size() < fName.size())
        key += key;
    for (int i = 0; i < fName.size(); ++i)
        fName[i] ^= key[i];

    while (key.size() < lName.size())
        key += key;
    for (int i = 0; i < lName.size(); ++i)
        lName[i] ^= key[i];

    while (key.size() < quest.size())
        key += key;
    for (int i = 0; i < quest.size(); ++i)
        quest[i] ^= key[i];

    while (key.size() < ans.size())
        key += key;
    for (int i = 0; i < ans.size(); ++i)
        ans[i] ^= key[i];

}
