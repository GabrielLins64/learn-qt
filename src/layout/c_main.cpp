#include <QApplication>
#include "calculator.hpp"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Calculator window;

    window.setWindowTitle("Calculator");
    window.show();

    return app.exec();
}