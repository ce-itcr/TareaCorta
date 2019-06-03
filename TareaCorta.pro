#-------------------------------------------------
#
# Project created by QtCreator 2019-06-03T13:30:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TareaCorta
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    src/dataStructures/queue/queue.cpp \
    src/principal.cpp \
    src/processes.cpp \
    src/dataStructures/queue/node.cpp \
    src/util/util.cpp \
    src/vehicle.cpp

HEADERS += \
        mainwindow.h \
    src/principal.h \
    src/dataStructures/queue/queue.h \
    src/processes.h \
    src/dataStructures/queue/node.h \
    src/util/util.h \
    src/vehicle.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    imgresources.qrc
