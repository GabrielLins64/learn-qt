#include <QApplication>
#include "nesting.hpp"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Layouts window;

    window.setWindowTitle("Layouts");
    window.show();

    return app.exec();
}