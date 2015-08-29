import QtQuick 2.5
import QtQuick.Window 2.2
import Chulup.SKeySequence 1.0

Window {
    visible: true
    visibility: "FullScreen"

    MainForm {
        id: form
        anchors.fill: parent
        focus: true

        Keys.onPressed: {
            centerText = ChApi.keyToString(event.key);
            colorArea = getColorForKey(event.key);
            event.accepted = true;
        }
    }

    function getColorForKey(key) {
        var hash = Qt.md5(key.toString(10));
        var cr = parseInt(hash.substring(0, 2), 16) / 256;
        var cg = parseInt(hash.substring(2, 4), 16) / 256;
        var cb = parseInt(hash.substring(4, 6), 16) / 256;
        var ca = 1;
        return Qt.rgba(cr, cg, cb, ca);
    }
}

