#ifndef RESETPASSWORD_H
#define RESETPASSWORD_H

#include <QDialog>

namespace Ui
{
class resetPassword;
}

class resetPassword : public QDialog
{
    Q_OBJECT

public:
    explicit resetPassword(QWidget *parent = 0);
    ~resetPassword();

private slots:
    void on_resetSubmitButton_clicked(); // submit button

    void on_resetHelpButton_clicked(); //help button

private:
    Ui::resetPassword *ui;
};

#endif // RESETPASSWORD_H
