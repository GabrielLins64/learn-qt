#include <QTextStream>
#include <QDate>

int main(void)
{
    QTextStream out(stdout);

    QDate dt{2020, 5, 11};
    QDate nd = dt.addDays(55);

    QDate cd = QDate::currentDate();
    int year = cd.year();
    QDate xmas{year, 12, 24};

    out << "55 days from " << dt.toString(Qt::DefaultLocaleLongDate) << " is "
        << nd.toString(Qt::DefaultLocaleLongDate) << endl;
    out << "There are " << cd.daysTo(xmas)
        << " days till Christmas" << endl;
}