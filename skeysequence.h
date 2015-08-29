#ifndef SKEYSEQUENCE_H
#define SKEYSEQUENCE_H

#include <QObject>
#include <QtQml>

class SKeySequence : public QObject
{
    Q_OBJECT
public:
    explicit SKeySequence(QObject *parent = 0);

    Q_INVOKABLE QString keyToString(Qt::Key key);

signals:

public slots:
};

#endif // SKEYSEQUENCE_H
