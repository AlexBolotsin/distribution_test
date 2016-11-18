QT += core
QT -= gui

CONFIG += c++11

TARGET = distribution_test
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    test_engine.cpp \
    basic_test.cpp \
    distributor.cpp \
    checks.cpp

HEADERS += \
    test_engine.h \
    basic_test.h \
    distributor.h \
    checks.h
