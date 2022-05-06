#include <QTextStream>
#include <QMap>

int main(void)
{
    QTextStream out(stdout);

    QMap<QString, int> items = {{"coins", 5}, {"books", 3}};

    items.insert("bottles", 7);

    QList<int> values = items.values();

    out << "Values: ";

    for (int val : values)
    {
        out << val << " ";
    }
    out << endl;

    QList<QString> keys = items.keys();

    out << "Keys: ";
    for (QString key : keys)
    {
        out << key << " ";
    }
    out << endl;

    QMapIterator<QString, int> it(items);

    out << "Pairs: ";

    while (it.hasNext())
    {
        it.next();
        out << "(" << it.key() << ": " << it.value() << ") ";
    }
    out << endl;

    return 0;
}