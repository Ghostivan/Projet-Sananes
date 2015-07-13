/********************************************************************************
** Form generated from reading UI file 'formsigninwindows.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSIGNINWINDOWS_H
#define UI_FORMSIGNINWINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FormSignInWindows
{
public:
    QPushButton *btnCreate;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btnCreerImg;
    QLineEdit *liedMail;
    QLineEdit *liedNom;
    QFrame *line;
    QFrame *line_2;
    QLineEdit *liedPrenom;

    void setupUi(QDialog *FormSignInWindows)
    {
        if (FormSignInWindows->objectName().isEmpty())
            FormSignInWindows->setObjectName(QStringLiteral("FormSignInWindows"));
        FormSignInWindows->resize(240, 357);
        btnCreate = new QPushButton(FormSignInWindows);
        btnCreate->setObjectName(QStringLiteral("btnCreate"));
        btnCreate->setEnabled(true);
        btnCreate->setGeometry(QRect(20, 300, 191, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        btnCreate->setFont(font);
        label = new QLabel(FormSignInWindows);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 181, 21));
        label->setFont(font);
        label_2 = new QLabel(FormSignInWindows);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 90, 181, 21));
        label_2->setFont(font);
        label_3 = new QLabel(FormSignInWindows);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 170, 181, 21));
        label_3->setFont(font);
        btnCreerImg = new QPushButton(FormSignInWindows);
        btnCreerImg->setObjectName(QStringLiteral("btnCreerImg"));
        btnCreerImg->setGeometry(QRect(20, 250, 191, 31));
        QFont font1;
        font1.setPointSize(7);
        font1.setBold(true);
        font1.setWeight(75);
        btnCreerImg->setFont(font1);
        liedMail = new QLineEdit(FormSignInWindows);
        liedMail->setObjectName(QStringLiteral("liedMail"));
        liedMail->setGeometry(QRect(20, 40, 191, 20));
        liedNom = new QLineEdit(FormSignInWindows);
        liedNom->setObjectName(QStringLiteral("liedNom"));
        liedNom->setGeometry(QRect(20, 120, 191, 20));
        line = new QFrame(FormSignInWindows);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(60, 160, 118, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(FormSignInWindows);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(60, 80, 118, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        liedPrenom = new QLineEdit(FormSignInWindows);
        liedPrenom->setObjectName(QStringLiteral("liedPrenom"));
        liedPrenom->setGeometry(QRect(20, 210, 191, 20));

        retranslateUi(FormSignInWindows);

        QMetaObject::connectSlotsByName(FormSignInWindows);
    } // setupUi

    void retranslateUi(QDialog *FormSignInWindows)
    {
        FormSignInWindows->setWindowTitle(QApplication::translate("FormSignInWindows", "Inscription - VISIOFACE", 0));
        btnCreate->setText(QApplication::translate("FormSignInWindows", "Cr\303\251er le compte", 0));
        label->setText(QApplication::translate("FormSignInWindows", "Adresse mail", 0));
        label_2->setText(QApplication::translate("FormSignInWindows", "Nom", 0));
        label_3->setText(QApplication::translate("FormSignInWindows", "Pr\303\251nom", 0));
        btnCreerImg->setText(QApplication::translate("FormSignInWindows", "Cr\303\251er les images d'authentification", 0));
    } // retranslateUi

};

namespace Ui {
    class FormSignInWindows: public Ui_FormSignInWindows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSIGNINWINDOWS_H
