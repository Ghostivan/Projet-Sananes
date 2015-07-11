#include "mainwindow.h"
#include "formconnectwindows.h"
#include "ui_formconnectwindows.h"

FormConnectWindows::FormConnectWindows(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormConnectWindows)
{
    ui->setupUi(this);

    // ui->comboBox->add
}

FormConnectWindows::~FormConnectWindows()
{
    delete ui;
}

void FormConnectWindows::on_pushButton_clicked()
{
    /*
     * --- CREATION FOLDER USER WITH MAIL ---
     *  string mail = ui->textEdit->toPlainText().toUtf8().constData();
        cout<<"Connect to "<<mail<<endl;
        mail = "usr/"+mail;
        mkdir(mail.data());
     *
     */
}

