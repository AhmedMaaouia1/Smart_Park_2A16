

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QT       += core gui  serialport

QT        += core gui sql core network
QT        += core gui multimedia
QT += core gui multimedia multimediawidgets

CONFIG += c++11
QT+= sql
CONFIG += console
QT+= gui
QT += core gui
QT += core gui charts

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    animal.cpp \
    animaux.cpp \
    arduino.cpp \
    classarduino.cpp \
    classclient.cpp \
    client.cpp \
    connexion.cpp \
    employe.cpp \
    employee.cpp \
    main.cpp \
    mainwindow.cpp \
    mainwindow0.cpp \
    produit.cpp \
    produitzoo.cpp \
    smtp.cpp
    qcustomplot.cpp

HEADERS += \
    animal.h \
    animaux.h \
    arduino.h \
    classarduino.h \
    classclient.h \
    client.h \
    connexion.h \
    employe.h \
    employee.h \
    mainwindow.h \
    mainwindow0.h \
    produit.h \
    produitzoo.h \
    smtp.h
    qcustomplot.h

FORMS += \
    animaux.ui \
    arduino.ui \
    client.ui \
    employee.ui \
    mainwindow.ui \
    mainwindow0.ui \
    produit.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
