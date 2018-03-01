#include "etat.h"
#include <iostream>

void Etat::Print () const{
	cout<<"Etat :"+nom<<endl; 
}

string Etat::getNom(){
    return nom;
}




