#include "symbole.h"
#include <iostream>

void Symbole::Affiche() {
   cout<<Etiquettes[ident];
}

void Entier::Affiche() {
   Symbole::Affiche();
   cout<<"("<<valeur<<")";
}

/*Entier * Entier::Addition(Entier e1, Entier e2){
    int v1 =e1.valeur;
    int v2 =e2.valeur;
    int v3 = v1+v2;
    Entier e3 = new Entier(v3);
    return e3;
}*/

