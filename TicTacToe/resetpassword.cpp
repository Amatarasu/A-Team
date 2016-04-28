#include "allheadertoinclude.h"
#include "ui_resetpassword.h"


resetPassword::resetPassword(QWidget *parent) : QDialog(parent), ui(new Ui::resetPassword)
{
    ui->setupUi(this);
}

resetPassword::~resetPassword()
{
    delete ui;
}

void resetPassword::on_resetSubmitButton_clicked()
{
    //this is the submit button for resetting password

    //open the databse
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("TicTacToeDB.db");
    bool dbConnection = db.open();

    //now collecting the necessary data to reset the password
    QString firstName, lastName, userName;
    firstName=ui->resetFirstNameInput->text();
    lastName=ui->resetLastName->text();
    userName = ui->resetUserName->text();


    if(!dbConnection)
    {
       //error connecting to database
        QMessageBox:: critical(this,"Error",db.lastError().text());
        return;
    }
    else
    {
        //valid database paramaters

        QSqlQuery searchingInfo;
        QString realFirstName, realLastName, realQuestion, realAnswer;
        searchingInfo.prepare("SELECT firstname,lastname,username,password,question,answer FROM players"
							"WHERE (:firstname, :lastname,:username)");
        searchingInfo.bindValue(":firstname",firstName);
		searchingInfo.bindValue(":lastname",lastName);
		searchingInfo.bindValue(":username",userName);
		bool isSuccessful =searchingInfo.exec();
		qDebug () << isSuccessful << endl;
        if(searchingInfo.exec())
        {
            //sucker trying to hack our database
			
            QMessageBox errorMessageSearch;
            errorMessageSearch.setInformativeText("Query Failed");
            errorMessageSearch.exec();
			
        }
        else
        {
            //information found, reseting password in database

            realFirstName = searchingInfo.value(0).toString();
            realLastName = searchingInfo.value(1).toString();
            realQuestion = searchingInfo.value(3).toString();
            realAnswer = searchingInfo.value(4).toString();

            QString providedAnswer = QInputDialog :: getText(this, "Answer the Question",realQuestion);
            int matchingAnswers = QString :: compare(providedAnswer,realAnswer);
            if(!matchingAnswers)
            {
                //the answer inputtted did not match to the one in the database
                QMessageBox wrongAnswer;
                wrongAnswer.setText("Answers don't match!");
                wrongAnswer.exec();
                return;
            }
            else
            {
               // the answer inputted did match
                QString newPassword, retypedNewPassword;
                QSqlQuery updatingPassword;
                newPassword = QInputDialog :: getText(this,"New password","Please Enter the new Password");
                retypedNewPassword = QInputDialog :: getText(this,"Retype Password", "Re-Enter your new password");
                int matching = (QString :: compare(newPassword,retypedNewPassword));

                //checks to see if the passwords match again
                while(matching != 0)
                {
                    QMessageBox errorMessageWrongPass;
                    errorMessageWrongPass.setText("Passwords do not match!");
                    newPassword = QInputDialog :: getText(this,"new password","Please Enter the new Password");
                    retypedNewPassword = QInputDialog :: getText(this,"retype Password", "Re-Enter your new password");
                    matching = (QString :: compare(newPassword,retypedNewPassword));
                }
                //updating the database
                updatingPassword.prepare("UPDATE `players` SET `firstname`=?,`lastname`=?,`username`=?,`password`=?");
                updatingPassword.bindValue(0,firstName);
                updatingPassword.bindValue(1,lastName);
                updatingPassword.bindValue(2,userName);
                updatingPassword.bindValue(3,newPassword);

                if(updatingPassword.exec())
                {
                    //shows message after the password is sucessfully  reset
                    QMessageBox successfulUpdate;
                    successfulUpdate.setText("Password Successfully updated");
                    successfulUpdate.exec();
                    db.close();
					close ();
                }
                else //error exception
                    QMessageBox :: critical(this, "Error message",db.lastError().text());

            }

        }
    }

}

void resetPassword::on_resetHelpButton_clicked()
{
    //doing help for how to reset your password

    QMessageBox onHelp;
    onHelp.setText("Enter first name, last name, username and press submit to proceed");
    onHelp.exec();
}
