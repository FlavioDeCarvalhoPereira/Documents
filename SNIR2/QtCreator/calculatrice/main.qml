import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.11
import "fonctions.js" as FonctionsCalcul

Window {
    visible: true
    width: 640
    height: 480
    color: "grey"
    title: qsTr("Ma fenetre")

    GridLayout{
        id: gridlayout
        anchors.fill: parent
        rows: 6
        columns: 4

        TextInput {
            id: afficheur
            horizontalAlignment: Text.AlignRight
            Layout.row: 0
            Layout.column: 0
            Layout.columnSpan: 4
            Layout.rowSpan: 1
            Layout.fillHeight: true
            Layout.fillWidth: true
        }

        Button{
            id: button7
            text: "7"
            Layout.row: 1
            Layout.column: 0
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                FonctionsCalcul.operation(this.text);
            }
        }
        Button{
            id: button4
            text: "4"
            Layout.row: 2
            Layout.column: 0
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                FonctionsCalcul.operation(this.text);
            }
        }
        Button{
            id: button1
            text: "1"
            Layout.row: 3
            Layout.column: 0
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                FonctionsCalcul.operation(this.text);
            }
        }
        Button{
            id: buttonC
            text: "C"
            Layout.row: 4
            Layout.column: 0
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                FonctionsCalcul.operation(this.text);
            }
        }

        Button{
            id: button8
            text: "8"
            Layout.row: 1
            Layout.column: 1
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                FonctionsCalcul.operation(this.text);
            }
        }
        Button{
            id: button5
            text: "5"
            Layout.row: 2
            Layout.column: 1
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                FonctionsCalcul.operation(this.text);
            }
        }
        Button{
            id: button2
            text: "2"
            height: 8
            width: 3
            Layout.row: 3
            Layout.column: 1
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                FonctionsCalcul.operation(this.text);
            }
        }
        Button{
            id: button0
            text: "0"
            height: 8
            width: 3
            Layout.row: 4
            Layout.column: 1
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                FonctionsCalcul.operation(this.text);
            }
        }

        Button{
            id: button9
            text: "9"
            height: 8
            width: 3
            Layout.row: 1
            Layout.column: 2
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                FonctionsCalcul.operation(this.text);
            }
        }
        Button{
            id: button6
            text: "6"
            height: 8
            width: 3
            Layout.row: 2
            Layout.column: 2
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                FonctionsCalcul.operation(this.text);
            }
        }
        Button{
            id: button3
            text: "3"
            height: 8
            width: 3
            Layout.row: 3
            Layout.column: 2
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                FonctionsCalcul.operation(this.text);
            }
        }
        Button{
            id: buttonEgal
            x: 0
            text: "="
            height: 8
            width: 700
            Layout.row: 5
            Layout.column: 2
            Layout.columnSpan: 2
            Layout.rowSpan: 1
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                FonctionsCalcul.operation(this.text);
            }
        }

        Button{
            id: buttonPlus
            text: "+"
            height: 8
            width: 3
            Layout.row: 1
            Layout.column: 3
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                FonctionsCalcul.operation(this.text);
            }
        }
        Button{
            id: buttonMoins
            text: "-"
            height: 8
            width: 3
            Layout.row: 2
            Layout.column: 3
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                FonctionsCalcul.operation(this.text);
            }
        }
        Button{
            id: buttonMultiplier
            text: "*"
            height: 8
            width: 3
            Layout.row: 3
            Layout.column: 3
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                FonctionsCalcul.operation(this.text);
            }
        }
        Button{
            id: buttonDiviser
            text: "/"
            height: 8
            width: 3
            Layout.row: 4
            Layout.column: 3
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                FonctionsCalcul.operation(this.text);
            }
        }
        Button{
            id: buttonVirgule
            text: "."
            height: 8
            width: 3
            Layout.row: 4
            Layout.column: 2
            Layout.fillHeight: true
            Layout.fillWidth: true
            onClicked: {
                FonctionsCalcul.operation(this.text);
            }
        }
    }



}
