#ifndef MYSINGLETON_H
#define MYSINGLETON_H
#include <qstring.h>

class MySingleton
{
public:
    static MySingleton* getInstance();

    QString getName() const;
    void setName(const QString &value);

private:
    static MySingleton* instance;
    QString name;
};

#endif // MYSINGLETON_H
