#!/bin/bash

QTCORE_INCLUDE_PATH="/usr/include/x86_64-linux-gnu/qt5/QtCore"
QT_INCLUDE_PATH="/usr/include/x86_64-linux-gnu/qt5/"
QT_LIB_PATH="/usr/lib/qt5"
CPP_VERSION="11"

g++ -o bin/$2 src/$1/$2.cpp \
    -std=c++$CPP_VERSION \
    -I$QTCORE_INCLUDE_PATH \
    -I$QT_INCLUDE_PATH \
    -L$QT_LIB_PATH \
    -lQt5Core \
    -fPIC && \
    ./bin/$2
