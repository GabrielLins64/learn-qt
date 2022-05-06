#include <QMenu>
#include <QMenuBar>
#include "another_menu.hpp"

AnotherMenu::AnotherMenu(QWidget *parent)
    : QMainWindow(parent)
{
    QPixmap newpix("assets/images/new.png");
    QPixmap openpix("assets/images/open.png");
    QPixmap quitpix("assets/images/quit.png");

    auto *newa = new QAction(newpix, "&New", this);
    auto *open = new QAction(openpix, "&Open", this);
    auto *quit = new QAction(quitpix, "&Quit", this);
    quit->setShortcut(tr("CTRL+Q"));

    QMenu *file = menuBar()->addMenu("&File");
    file->addAction(newa);
    file->addAction(open);
    file->addSeparator();
    file->addAction(quit);

    qApp->setAttribute(Qt::AA_DontShowIconsInMenus, false);

    connect(quit, &QAction::triggered, qApp, &QApplication::quit);
}