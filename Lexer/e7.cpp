#include "e7.h"
#include <iostream>

bool E7::transition(Automate & automate, Symbole * s) {
	switch (*s){
        case MULT :
        automate.decalage(s,new E5);
        break;
        case PLUS : case CLOSEPAR : case FIN :{
            Entier * s1=(Entier*) automate.getAndDestroySymbole();
            automate.destroySymbole();
            Entier * s2=(Entier*) automate.getAndDestroySymbole();
            automate.reduction(3);
            
            Etat * e = automate.getDecalageNonTerminaux();
            Symbole * newS = s1->Addition(s2);
            automate.decalage(newS,e);
            e->transition(automate,s);
            break;
        }
        default :
            automate.Erreur();
            break;

		
       
	}
	return false;
}




