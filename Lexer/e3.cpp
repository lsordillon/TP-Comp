#include "e3.h"
#include <iostream>

bool E3::transition(Automate & automate, Symbole * s) {
	switch (*s){
            
            //REDUCTION
        case PLUS: case MULT : case CLOSEPAR : case FIN :{
			
			// Supprime symbole de la pile avant de rempiler le symbole produit
            Symbole * s2=automate.getAndDestroySymbole();
            automate.reduction(1);
            
            Etat * e = automate.getDecalageNonTerminaux();
            automate.decalage(s2,e);
            e->transition(automate,s);
            break;
        }
        default :
            automate.Erreur();
            break;

	}
	return false;
}




