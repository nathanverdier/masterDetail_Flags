import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    color: "lightgray"
    ListView {
        id: listView
        width: parent.width/2
        height: parent.height
        model: superliste
        delegate: Pays {
            namePays: name
            image: "/assets/flags/"+iso+".svg"
        }
    }
    Rectangle{
        id: detailRect
        height: 400
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: listView.right
        anchors.right: parent.right
        color: "lightgray"
        Column{
            anchors.horizontalCenter: parent.horizontalCenter
            Image {
                id: imageCountryAffiche
                height: detailRect.height
                width: detailRect.width
                fillMode: Image.PreserveAspectFit
            }
            Text {
                id: nameCountryAffiche
                anchors.horizontalCenter: parent.horizontalCenter
                font.pointSize: 20
            }
        }
    }
}
