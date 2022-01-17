import QtQuick 2.12
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.11

Page {
    id: page1
    width: 600
    height: 400
    property alias sliderTaille: sliderTaille

    property alias switchSexe: switchSexe
    property alias sliderPoids: sliderPoids
    property alias spinBoxAge: spinBoxAge
    property alias labelPoids: labelValPoids
    property alias labelTaille: labelValTaille

    header: Label {
        text: qsTr("Informations personnelles")
        font.pixelSize: Qt.application.font.pixelSize * 2
        padding: 10
    }

    ColumnLayout {
        id: columnLayoutInformationsPersonnelles
        anchors.fill: parent

        RowLayout {
            id: rowLayoutSexe
            width: 100
            height: 100
            Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
            Layout.fillWidth: false

            Label {
                id: labelSexe
                text: qsTr("Sexe")
                Layout.leftMargin: 0
                padding: 0
                topPadding: 0
                font.bold: true
                font.family: "Verdana"
                font.pointSize: 30
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignLeft
                Layout.minimumWidth: 0
            }

            Switch {
                text: "femme"
                Layout.leftMargin: 60
                Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
                font.pointSize: 30
                font.bold: true
                font.family: "Verdana"
                id: switchSexe
                onCheckedChanged: if (switchSexe.text == "homme")
                                      switchSexe.text = "femme"
                                  else
                                      switchSexe.text = "homme"
            }
        }

        RowLayout {
            id: rowLayoutAge
            width: 100
            height: 100
            Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
            Layout.fillWidth: true

            Label {
                id: labelAge
                text: qsTr("Age")
                Layout.leftMargin: 0
                font.pointSize: 30
                font.bold: true
                font.family: "Verdana"
            }

            SpinBox {
                id: spinBoxAge
                font.bold: true
                font.family: "Verdana"
                font.pointSize: 30
                Layout.leftMargin: 60
                to: 200
                value: 19
            }
        }

        RowLayout {
            id: rowLayoutPoids
            width: 100
            height: 100
            Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
            Layout.fillHeight: false
            Layout.fillWidth: true

            Label {
                id: labelPoids
                text: qsTr("Poids")
                Layout.leftMargin: 0
                font.bold: true
                font.family: "Verdana"
                font.pointSize: 30
            }

            Slider {
                id: sliderPoids
                font.bold: true
                font.family: "Verdana"
                font.pointSize: 30
                Layout.leftMargin: 20
                Layout.fillHeight: false
                Layout.fillWidth: false
                stepSize: 0.01
                to: 300
                from: 15
                value: 80
            }

            Label {
                id: labelValPoids
                text: sliderPoids.value.toFixed(2)
                font.family: "Verdana"
                font.bold: true
                font.pointSize: 30
            }
        }

        RowLayout {
            id: rowLayoutTaille
            width: 100
            height: 100
            Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
            Layout.fillWidth: true

            Label {
                id: labelTaille
                text: qsTr("Taille")
                Layout.leftMargin: 0
                font.bold: true
                font.family: "Verdana"
                font.pointSize: 30
            }

            Slider {
                id: sliderTaille
                font.family: "Verdana"
                font.pointSize: 30
                Layout.leftMargin: 20
                from: 0
                stepSize: 0.01
                to: 3
                value: 1.8
            }

            Label {
                id: labelValTaille
                text: sliderTaille.value.toFixed(2)
                font.bold: true
                font.family: "Verdana"
                font.pointSize: 30
                Layout.fillWidth: false
            }
        }
    }
}

/*##^##
Designer {
    D{i:2;anchors_height:350;anchors_width:301}
}
##^##*/
