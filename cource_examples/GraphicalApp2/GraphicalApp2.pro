QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    form1.cpp \
    form2.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    mysingleton.cpp \
    persondata.cpp

HEADERS += \
    form1.h \
    form2.h \
    login.h \
    mainwindow.h \
    mysingleton.h \
    persondata.h

FORMS += \
    form1.ui \
    form2.ui \
    login.ui \
    mainwindow.ui \
    persondata.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
