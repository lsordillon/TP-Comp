#include "e8.h"
#include <iostream>

bool E8::transition(Automate & automate, Symbole * s) {
    switch (*s){
        default :
            Symbole * s1=automate.getAndDestroySymbole();
            automate.destroySymbole();
            Symbole * s2=automate.getAndDestroySymbole();
            automate.reduction(3);
            
            Etat * e = automate.getDecalageNonTerminaux();
            Symbole * newS = s1->Multiplication(s2);
            automate.decalage(newS,e);
            e->transition(automate,s);
            break;

		
        // Gestion des erreurs ? 
	}
	return false;
}




