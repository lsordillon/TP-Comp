#include "automate.h"
#include <iostream>

void Automate::init() {
    etatstack.push_back(new E0);
    cout<<"Automate créé et initiatisé a E0"<<endl;
}

void Automate::decalage(Symbole * s, Etat * e){
	symbolestack.push_back(s);
	etatstack.push_back(e);
}

void Automate::Erreur(){
    symbolestack.push_back(new Symbole (ERREUR));
}


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

void Automate::Resultat (){
    Symbole * s = symbolestack.back();
    cout<<"Le résultat est :";
    s->Affiche();
    cout<<endl;

}

Etat * Automate::getEtat (){
    Etat * e = etatstack.back();
    e->Print();
    return e;
}

Symbole * Automate::getSymbole (){
    Symbole * s = symbolestack.back();
    return s;
}

Etat * Automate::getDecalageNonTerminaux(){
    Etat * e = etatstack.back();
    string nom = e->getNom();
    
    if (nom=="E0"){
        return new E1();
    }
    else if (nom=="E2"){
        return new E6();
    }
    else if (nom=="E4"){
        return new E7();
    }
    else{
        return new E8();
    }
    
}
