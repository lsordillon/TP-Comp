#include "e9.h"
#include <iostream>

bool E9::transition(Automate & automate, Symbole * s) {
    switch (*s){
        default :
            automate.destroySymbole();
            Symbole * s1=automate.getAndDestroySymbole();
            automate.destroySymbole();
            automate.reduction(3);
            
            Etat * e = automate.getDecalageNonTerminaux();
            automate.decalage(s1,e);
            e->transition(automate,s);
            break;

        // Gestion des erreurs ? 
	}
	return false;
}




