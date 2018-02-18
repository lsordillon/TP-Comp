#include "automate.h"
#include <iostream>

void Automate::decalage(Symbole * s, Etat * e){
	symbolestack.push_back(s);
	etatstack.push_back(e);
}

void Automate::reduction(int n, Symbole * s){
    for(int i=0; i<n;i++){
        symbolestack.pop_back();
        etatstack.pop_back();
    }
    symbolestack.push_back(s);
}

Symbole * Automate::getSymbole (){
    Symbole * s = symbolestack.back();
    return s;
}

Etat * Automate::getEtat (){
    Etat * e = etatstack.back();
    return e;
}
