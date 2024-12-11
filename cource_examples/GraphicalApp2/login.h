#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

    QString getName() const;
    void setName(const QString &newName);

private slots:
    void on_btnSave_clicked();

private:
    Ui::Login *ui;
    QString name;
signals:
    void nameSetted();
};

#endif // LOGIN_H
