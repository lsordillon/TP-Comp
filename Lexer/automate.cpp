#include "automate.h"
#include <iostream>

void Automate::decalage(Symbole * s, Etat * e){
	symbolestack.push_back(s);
	etatstack.push_back(e);
}

/**
 *Réalise la fin de la reduction
 *on supprime les n états a supprimer
 */
void Automate::reduction(int n){
    for(int i=0; i<n;i++){
        etatstack.pop_back();
    }
}

void Automate::destroySymbole(){
    symbolestack.pop_back();
}
Symbole * Automate::getAndDestroySymbole (){
    Symbole * s = symbolestack.back();
    symbolestack.pop_back();
    return s;
}

Etat * Automate::getEtat (){
    Etat * e = etatstack.back();
    return e;
}
