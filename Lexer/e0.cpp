#include "e0.h"
#include <iostream>

bool E0::transition(Automate & automate, Symbole * s) {
	switch (*s){
        case OPENPAR :
        automate.decalage(s,new E2);
        break;
	// Cas id --> E3
    //cas non terminaux --> E1
    // gestion des cas d'erreur
	}
	return false;
}




