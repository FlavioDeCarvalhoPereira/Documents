// fonctions.js

function operation(op)
{

    if(op === "C"){
        afficheur.text="";

    }else{

        if(op === "="){
            var res=eval(afficheur.text);
            afficheur.text=res;
        }else{

            afficheur.text=afficheur.text+op;
        }
    }
}
