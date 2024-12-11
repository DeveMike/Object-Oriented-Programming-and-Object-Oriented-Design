#ifndef FORM1_H
#define FORM1_H

#include <QDialog>

namespace Ui {
class Form1;
}

class Form1 : public QDialog
{
    Q_OBJECT

public:
    explicit Form1(QWidget *parent = nullptr);
    ~Form1();

private slots:
    void on_btnSave_clicked();

private:
    Ui::Form1 *ui;
};

#endif // FORM1_H
