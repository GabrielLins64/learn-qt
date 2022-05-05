#!/bin/bash

g++ -o bin/"$1" src/*/"$1".cpp -std=c++11 -I"/usr/include/x86_64-linux-gnu/qt5/QtCore" \
    -I"/usr/include/x86_64-linux-gnu/qt5/" -L"/usr/lib/qt5" -lQt5Core -fPIC && \
    ./bin/"$1"
