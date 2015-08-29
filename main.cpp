#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "skeysequence.h"

static QObject *SKeySequence_provider(QQmlEngine *engine, QJSEngine *scriptEngine)
{
    Q_UNUSED(engine)
    Q_UNUSED(scriptEngine)

    SKeySequence *example = new SKeySequence();
    return example;
}

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    qmlRegisterSingletonType<SKeySequence>("Chulup.SKeySequence", 1, 0, "ChApi", SKeySequence_provider);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}

