#include "e3.h"
#include <iostream>

bool E3::transition(Automate & automate, Symbole * s) {
	switch (*s){
            
            //REALISATION DE LA REDUCTION
        default:
            Symbole * s2=automate.getAndDestroySymbole(); // Je supprime le symbole pour le remettre ensuite dans la pile (dans reduction)
            automate.reduction(1);
            
            E1 * e1 = new E1();
            automate.decalage(s2,e1);
            e1->transition(automate,s);// la je suis sceptique sur mes histoires de pointeurs
            break;

        // Gestion des erreurs ? 
	}
	return false;
}




