#include "etat.h"
#include <iostream>

void Etat::Print () const{
	cout<<"Etat :"+nom; 
}

string Etat::getNom(){
    return nom;
}




