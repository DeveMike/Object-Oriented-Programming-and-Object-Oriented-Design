#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QDialog>

namespace Ui {
class Calculator;
}

class Calculator : public QDialog
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = nullptr);
    ~Calculator();

    void setUsername(const QString &newUsername);

private slots:
    void on_btnSum_clicked();

private:
    Ui::Calculator *ui;
    QString username;
};

#endif // CALCULATOR_H
