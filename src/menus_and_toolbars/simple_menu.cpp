#include <QMenu>
#include <QMenuBar>
#include "simple_menu.hpp"

SimpleMenu::SimpleMenu(QWidget *parent)
    : QMainWindow(parent)
{
    auto *quit = new QAction("&Quit", this);

    QMenu *file = menuBar()->addMenu("&File");
    file->addAction(quit);

    connect(quit, &QAction::triggered, qApp, QApplication::quit);
}