import QtQuick 2.12
import QtQuick.Controls 2.5
import "calculpoids.js" as FonctionCalcul

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Tabs")

    SwipeView {
        id: swipeView
        anchors.fill: parent
        currentIndex: tabBar.currentIndex
        onCurrentIndexChanged: {
            if(currentIndex===1){
                var poids;
                var taille;
                var imc;

                imc = FonctionCalcul.calculImc(page1.labelPoids.text, page1.labelTaille.text);

                page2.textImc.text = imc.toFixed(2);
                page2.textCorpulence.text = FonctionCalcul.getCorpulence(imc);
                page2.dial.value = page1.sliderPoids.value;

                page2.dial.poidsPersonne = page1.sliderPoids.value + " Kg";
                page2.dial.couleurCercle = FonctionCalcul.getCorpulenceColor(imc);
            }
        }


        Page1Form {
            id: page1
            switchSexe.onCheckedChanged: {
                if (switchSexe.text == "homme"){
                    switchSexe.text = "femme"
                }else{
                    switchSexe.text = "homme"
                }
            }
        }

        Page2Form {
            id: page2
            buttonDevine.onClicked:
                labelPoidsIdeal.text = FonctionCalcul.devine(page1.labelTaille.text,page1.switchSexe.text).toFixed(2)
            buttonLorentz.onClicked:
                labelPoidsIdeal.text = FonctionCalcul.lorentz(page1.labelTaille.text,page1.switchSexe.text).toFixed(2)
            buttonAge.onClicked:
                labelPoidsIdeal.text = FonctionCalcul.lorentzAge(page1.labelTaille.text,page1.spinBoxAge.value).toFixed(2)
        }
    }

    footer: TabBar {
        id: tabBar
        currentIndex: swipeView.currentIndex

        TabButton {
            text: qsTr("Informations Personnelles")
        }
        TabButton {
            text: qsTr("IMC et Poids idéal")
        }
    }
}
