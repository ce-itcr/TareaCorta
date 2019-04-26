#-------------------------------------------------
#
# Project created by QtCreator 2019-04-25T09:33:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TareaCortaInterface
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


SOURCES += \
        main.cpp \
        gui.cpp \
        src/Vehicle.cpp \
        dataStructures/queue/Queue.cpp \
        dataStructures/queue/QueueItem.cpp \
        src/Vehicles.cpp \
        src/Utils.cpp \
        src/Node.cpp \
        about.cpp \
        src/Processes.cpp \
        src/principal.cpp \
        mainwindow.cpp

HEADERS += \
    gui.h \
    mainwindow.h \
    src/Vehicle.h \
    dataStructures/queue/Queue.h \
    dataStructures/queue/QueueItem.h \
    src/Vehicles.h \
    src/Utils.h \
    src/Node.h \
    about.h \
    src/Processes.h \
    src/principal.h

FORMS += \
        mainwindow.ui \
        gui.ui \
        about.ui

DISTFILES +=

RESOURCES += \
    img/img.qrc
