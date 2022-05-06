#include <QTextStream>
#include <QDate>

int main(void)
{
    QTextStream out(stdout);

    QDate cd = QDate::currentDate();
    int wd = cd.dayOfWeek();

    QLocale locale(QLocale("en_US"));

    out << "Today is " << locale.dayName(wd) << endl;
    out << "Today is " << locale.dayName(wd, QLocale::ShortFormat) << endl;

    QLocale locale2(QLocale("pt_BR"));

    out << "Today is " << locale2.dayName(wd) << endl;
    out << "Today is " << locale2.dayName(wd, QLocale::ShortFormat) << endl;
}
