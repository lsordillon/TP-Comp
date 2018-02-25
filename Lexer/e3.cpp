#include "e3.h"
#include <iostream>

bool E3::transition(Automate & automate, Symbole * s) {
	switch (*s){
            
            //REALISATION DE LA REDUCTION
        case PLUS: case MULT : case CLOSEPAR : case FIN :{
            Symbole * s2=automate.getAndDestroySymbole(); // Je supprime le symbole pour le remettre ensuite dans la pile (dans reduction)
            automate.reduction(1);
            
            Etat * e = automate.getDecalageNonTerminaux();
            automate.decalage(s2,e);
            e->transition(automate,s);// la je suis sceptique sur mes histoires de pointeurs
            break;
        }
        default :
            automate.Erreur();
            break;

	}
	return false;
}




