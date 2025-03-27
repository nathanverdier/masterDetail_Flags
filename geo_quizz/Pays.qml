import QtQuick 2.15


Rectangle {
    property alias namePays: nameCountry.text
    property alias image: imageCountry.source
    //property Country selectedCountry : null
    width: listView.width
    height: 60
    color: "gray"

    Text {
        id: nameCountry
        anchors.verticalCenter: parent.verticalCenter
        font.pointSize: 20
    }
    Image {
        id: imageCountry
        height: parent.height -4
        anchors.right: parent.right

        fillMode: Image.PreserveAspectFit
    }
    MouseArea{
        anchors.fill: parent

        onClicked: {
            nameCountryAffiche.text = namePays
            imageCountryAffiche.source = image
        }
    }
}
