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
Entier * Entier::Addition(Entier * e2){
    int v1 =this->valeur;
    int v2 =e2->valeur;
    cout<<"Grosse addition :"<<v1<<"+"<<v2<<" :"<<v1+v2<<endl;
    return new Entier(v1+v2);
}

/**
 *Se charge du produit de 2 entier et renvoie le symbole correspondant
 * !! PAS FINI !!
 *a faire sur le même schema de addition
 *appeler dans E8
 */
Entier * Entier::Multiplication(Entier * e2){
   int v1 =this->valeur;
   int v2 =e2->valeur;
   cout<<"Grosse multiplication :"<<v1<<"*"<<v2<<" :"<<v1*v2<<endl;
   return new Entier(v1*v2);
}

