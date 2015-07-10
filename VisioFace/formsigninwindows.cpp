#include "formsigninwindows.h"
#include "ui_formsigninwindows.h"

FormSignInWindows::FormSignInWindows(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormSignInWindows)
{
    ui->setupUi(this);
}

FormSignInWindows::~FormSignInWindows()
{
    delete ui;
}
