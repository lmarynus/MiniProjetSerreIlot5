# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux
TARGET = VuePrincipaleTesteur
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets
SOURCES += ../VueMeteoTesteur/VueMeteo.cpp.cc ../VueSerreTesteur/VueSerre.cpp.cc VuePrincipale.cpp.cc main.cpp
HEADERS += ../VueMeteoTesteur/VueMeteo.h ../VueSerreTesteur/VueSerre.h VuePrincipale.h
FORMS += ../VueMeteoTesteur/VueMeteo.ui ../VueSerreTesteur/VueSerre.ui VuePrincipale.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/GNU-Linux
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
