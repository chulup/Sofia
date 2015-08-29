#include "skeysequence.h"
#include <qkeysequence.h>

SKeySequence::SKeySequence(QObject *parent) : QObject(parent)
{

}

QString SKeySequence::keyToString(Qt::Key key) {
    if ((key >= Qt::Key_0 && key <= Qt::Key_9) ||
        (key >= Qt::Key_A && key <= Qt::Key_Z) ||
        (key >= Qt::Key_F1 && key <= Qt::Key_F35)) {
        return QKeySequence(key).toString();
    } /* Enter, Tab, Space, Shift, Backspace, others */

    return QString("");
}
