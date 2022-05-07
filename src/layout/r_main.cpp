#include <QApplication>
#include "review.hpp"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Review window;

    window.setWindowTitle("Review");
    window.show();

    return app.exec();
}