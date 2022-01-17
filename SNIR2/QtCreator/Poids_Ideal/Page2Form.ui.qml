import QtQuick 2.12
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.11

Page {
    id: page2
    width: 600
    height: 400

    property alias textImc: labelValImc
    property alias textCorpulence: labelValCorpulance
    property alias dial: dial
    property alias labelPoidsIdeal: labelPoidsIdeal
    property alias buttonDevine: buttonDevine
    property alias buttonLorentz: buttonLorentz
    property alias buttonAge: buttonAge

    header: Label {
        text: qsTr("IMC et Poids idéal")
        font.pixelSize: Qt.application.font.pixelSize * 2
        padding: 10
    }

    ColumnLayout {
        id: columnLayout
        anchors.fill: parent


        RowLayout {
            id: rowLayout
            width: 100
            height: 100
            Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
            Layout.leftMargin: 0


            Text {
                id: textValImc
                text: qsTr("IMC")
                font.pixelSize: 12
            }

            Label {
                id: labelValImc
                text: qsTr("Label")
            }

            Text {
                id: textCorpulence
                text: qsTr("Corpulence")
                font.pixelSize: 12
            }

            Label {
                id: labelValCorpulance
                text: qsTr("Label")
            }
        }

        RowLayout {
            id: rowLayout2
            width: 100
            height: 100
            Layout.leftMargin: 80
            Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
            Layout.fillWidth: false

            Dial {
                id: dial
                value: 71
                stepSize: 0.01
                to: 300
                from: 15
                property string couleurCercle: "Teal"
                property string poidsPersonne: "0Kg"

                RoundButton {
                    id: roundButton
                    x: 0
                    y: 0
                    opacity: 0.6
                    width: 184
                    height: 184
                    text: dial.poidsPersonne
                    scale: 1
                    background: Rectangle {
                        radius: roundButton.radius
                        color: dial.couleurCercle
                    }
                }
            }

            Label {
                id: labelPoidsIdeal
                text: qsTr("Poids Idéal")
            }
        }

        Button {
            id: buttonDevine
            text: qsTr("Poids idéal selon Devine")
            Layout.fillWidth: true

        }

        Button {
            id: buttonLorentz
            text: qsTr("Poids idéal selon Lorentz")
            Layout.fillWidth: true
        }

        Button {
            id: buttonAge
            text: qsTr("Poids idéal selon Lorentz/age")
            Layout.fillWidth: true
        }
    }
}
