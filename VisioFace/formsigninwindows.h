#ifndef FORMSIGNINWINDOWS_H
#define FORMSIGNINWINDOWS_H

#include <QDialog>

namespace Ui {
class FormSignInWindows;
}

class FormSignInWindows : public QDialog
{
    Q_OBJECT

public:
    explicit FormSignInWindows(QWidget *parent = 0);
    ~FormSignInWindows();

private:
    Ui::FormSignInWindows *ui;
};

#endif // FORMSIGNINWINDOWS_H
