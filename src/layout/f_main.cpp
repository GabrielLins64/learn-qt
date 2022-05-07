#include <QApplication>
#include "form.hpp"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    FormEx window;

    window.setWindowTitle("Form example");
    window.show();

    return app.exec();
}