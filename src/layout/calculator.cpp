#include <QGridLayout>
#include <QPushButton>
#include "calculator.hpp"

Calculator::Calculator(QWidget *parent)
    : QWidget(parent)
{
    auto *grid = new QGridLayout(this);
    grid->setSizeConstraint(QLayout::SetFixedSize); // Makes the window not resizable
    grid->setSpacing(2);

    auto *display = new QLineEdit("0");
    display->setReadOnly(true);
    display->setAlignment(Qt::AlignRight);

    QFont font = display->font();
    font.setPointSize(font.pointSize() + 8);
    display->setFont(font);

    grid->addWidget(display, 0, 0, 1, 4);

    QVector<QString> values({"7", "8", "9", "/",
                             "4", "5", "6", "*",
                             "1", "2", "3", "-",
                             "0", ".", "=", "+"});

    int pos = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            auto *btn = new QPushButton(values[pos], this);
            btn->setFixedSize(40, 40);
            grid->addWidget(btn, i + 1, j);
            pos++;
        }
    }

    setLayout(grid);
}