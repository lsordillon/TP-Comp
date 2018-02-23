#include "symbole.h"
#include <iostream>

void Symbole::Affiche() {
   cout<<Etiquettes[ident];
}

void Entier::Affiche() {
   Symbole::Affiche();
   cout<<"("<<valeur<<")";
}

/**
 *Se charge de l'addition de 2 entier et renvoie le symbole correspondant
 * !! PAS FINI !!
 * techniquement ça devrait être uniquement des entiers, car il faut acceder a leur valeur. J'arrive pas a gérer l'héritage Symbole Entier pour l'instant 
 *(appeler dans E7)
 */
Symbole * Symbole::Addition(Symbole * e2){
    /*int v1 =this->valeur;
    int v2 =e2->valeur;
    int v3 = v1+v2;
    //Entier e3 = new Entier(v3);*/
    return new Entier(100);
}

/**
 *Se charge du produit de 2 entier et renvoie le symbole correspondant
 * !! PAS FINI !!
 *a faire sur le même schema de addition
 *appeler dans E8
 */
Symbole * Symbole::Multiplication(Symbole * e2){
   /* int v1 =this->valeur;
    int v2 =e2->valeur;
    int v3 = v1*v2;
    //Entier e3 = new Entier(v3);*/
    return new Entier(200);
}

