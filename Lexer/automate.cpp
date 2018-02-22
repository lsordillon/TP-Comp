#include "automate.h"
#include <iostream>

void Automate::init() {
    etatstack.push_back(new E0);
    cout<<"Automate créé et init";
}

void Automate::decalage(Symbole * s, Etat * e){
	symbolestack.push_back(s);
	etatstack.push_back(e);
    
    cout<<"Je modifie les piles"<<endl;
    etatstack.back()->Print();
    symbolestack.back()->Affiche();
    cout<<"Modification terminée"<<endl;
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
    e->Print();
    return e;
}

/**
 * Dans le cas d'une reduction, pour ne pas tourner en rond, on doit réaliser un decalage correspondant à la colonne Non Terminaux
 *Ce décalage dépend de l'état actuel (apres la suppression necessaire)
 */
Etat * Automate::getDecalageNonTerminaux(){
    Etat * e = etatstack.back();
    string nom = e->getNom();
    if (nom.compare("E0")){
        return new E1();
    }
    else if (nom.compare("E2")){
        return new E6();
    }
    else if (nom.compare("E4")){
        return new E7();
    }
    else{
        return new E8();
    }
}
