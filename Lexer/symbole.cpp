#include "symbole.h"
#include <iostream>

void Symbole::Affiche() {
   cout<<Etiquettes[ident]<<endl;
}

void Entier::Affiche() {
   cout<<Etiquettes[ident]<<"("<<valeur<<")"<<endl;;
}

Entier * Entier::Addition(Entier * e2){
	
    int v1 =this->valeur;
    int v2 =e2->valeur;
    return new Entier(v1+v2);
}


Entier * Entier::Multiplication(Entier * e2){
	
   int v1 =this->valeur;
   int v2 =e2->valeur;
   return new Entier(v1*v2);
}

