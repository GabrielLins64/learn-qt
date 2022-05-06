#!/bin/bash

QTCORE_INCLUDE_PATH="/usr/include/x86_64-linux-gnu/qt5/QtCore"
QT_INCLUDE_PATH="/usr/include/x86_64-linux-gnu/qt5/"
QT_LIB_PATH="/usr/lib/qt5"
LOCAL_HEADERS="include"
CPP_VERSION="11"
MODULE=$1
CPP_SOURCES=( "${@:2}" )                            # All CLI args, starting from 2
CPP_SOURCES=("${CPP_SOURCES[@]/#/src\/$MODULE\/}")  # Prefix '#'
CPP_SOURCES=("${CPP_SOURCES[@]/%/.cpp}")            # Suffix '%'

g++ -o bin/"${@: -1}" "${CPP_SOURCES[@]}" \
    -std=c++$CPP_VERSION \
    -I$QTCORE_INCLUDE_PATH \
    -I$QT_INCLUDE_PATH \
    -I$LOCAL_HEADERS \
    -L$QT_LIB_PATH \
    -lQt5Core \
    -fPIC && \
    ./bin/"${@: -1}"
