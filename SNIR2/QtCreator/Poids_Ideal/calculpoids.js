function getCorpulence(imc)
{
    const NBIMC=6;
    const NBCORPULENCE=7
    const imcs = [16.5, 18.5, 25, 30, 35, 40];
    const corpulences = ["Famine", "Maigreur", "Normale", "Surpoids", "Obésité modérée", "Obésité sévère", "Obésité morbide"];
    var indiceCorpulence = 0;
    for (var i = 0; i < NBIMC - 1; i++) {
        if (imc > imcs[i] && imc <= imcs[i + 1]) {
            indiceCorpulence = i + 1;
        }
    }
    // cas extreme
    if (imc < 16.5) {
        indiceCorpulence = 0;
    }
    if (imc > 40) {
       indiceCorpulence = NBCORPULENCE - 1;
    }
    // affichage de la corpulence: corpulences[indiceCorpulence]
    return corpulences[indiceCorpulence];
}
function lorentz(taille,sexe)
{
    var poidsIdeal;
    // a compléter
    if(sexe==="femme"){
        poidsIdeal=taille*100-100-((taille*100-150)/2.5);
    }else{
        poidsIdeal=taille*100-100-((taille*100-150)/4);
    }

    return poidsIdeal;
}
function devine(taille,sexe)
{
    var poidsIdeal;
    // a compléter
    if(sexe==="femme"){
        poidsIdeal=45.5+2.3*((taille/0.0254)-60);
    }else{
        poidsIdeal=50+2.3*((taille/0.0254)-60);
    }

    return poidsIdeal;
}
function lorentzAge(taille,age)
{
    var poidsIdeal;
    // a compléter
    poidsIdeal=50+((taille*100-150)/4)+((age-20)/4);
    return poidsIdeal;
}
function calculImc(poids,taille){
    var imc;
    imc=poids/(taille*taille);
    return imc;
}

function getCorpulenceColor(imc)
{
    const NBIMC=6;
    const NBCORPULENCE=7
    const imcs = [16.5, 18.5, 25, 30, 35, 40];
    const corpulences = ["white", "blue", "Teal", "green", "yellow", "orange", "red"];
    var indiceCorpulence = 0;
    for (var i = 0; i < NBIMC - 1; i++) {
        if (imc > imcs[i] && imc <= imcs[i + 1]) {
            indiceCorpulence = i + 1;
        }
    }
    // cas extreme
    if (imc < 16.5) {
        indiceCorpulence = 0;
    }
    if (imc > 40) {
       indiceCorpulence = NBCORPULENCE - 1;
    }
    // affichage de la corpulence: corpulences[indiceCorpulence]
    return corpulences[indiceCorpulence];
}
