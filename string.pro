TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

TARGET = string_app

QMAKE_CXXFLAGS += -save-temps

SOURCES += \
    string.cpp

