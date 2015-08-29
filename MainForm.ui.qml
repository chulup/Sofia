import QtQuick 2.5

Rectangle {
    property alias mouseArea: mouseArea
    property alias centerText: centerText.text
    property alias colorArea: rect.color

    id: rect
    width: 360
    height: 360

    MouseArea {
        id: mouseArea
        anchors.fill: parent
    }

    Text {
        id: centerText
        anchors.centerIn: parent
        text: "Привет!"
        font.pointSize: 67
    }
}

