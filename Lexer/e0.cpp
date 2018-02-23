#include "e0.h"
#include <iostream>

bool E0::transition(Automate & automate, Symbole * s) {
	switch (*s){
        case OPENPAR :
        automate.decalage(s,new E2);
        break;
        case INT :
        automate.decalage(s,new E3);
        break;
	
    //cas non terminaux --> E1
    // gestion des cas d'erreur
	}
	return false;
}




