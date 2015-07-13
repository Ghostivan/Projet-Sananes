/********************************************************************************
** Form generated from reading UI file 'formconnectwindows.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCONNECTWINDOWS_H
#define UI_FORMCONNECTWINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FormConnectWindows
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QComboBox *comboBox;

    void setupUi(QDialog *FormConnectWindows)
    {
        if (FormConnectWindows->objectName().isEmpty())
            FormConnectWindows->setObjectName(QStringLiteral("FormConnectWindows"));
        FormConnectWindows->resize(255, 149);
        pushButton = new QPushButton(FormConnectWindows);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 100, 181, 31));
        label = new QLabel(FormConnectWindows);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 211, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        comboBox = new QComboBox(FormConnectWindows);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(30, 50, 181, 21));

        retranslateUi(FormConnectWindows);

        QMetaObject::connectSlotsByName(FormConnectWindows);
    } // setupUi

    void retranslateUi(QDialog *FormConnectWindows)
    {
        FormConnectWindows->setWindowTitle(QApplication::translate("FormConnectWindows", "Authentification - VISIOFACE", 0));
        pushButton->setText(QApplication::translate("FormConnectWindows", "Connexion", 0));
        label->setText(QApplication::translate("FormConnectWindows", "Adresse de messagerie", 0));
    } // retranslateUi

};

namespace Ui {
    class FormConnectWindows: public Ui_FormConnectWindows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCONNECTWINDOWS_H
