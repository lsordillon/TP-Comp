#include "e6.h"
#include <iostream>

bool E6::transition(Automate & automate, Symbole * s) {
	switch (*s){
		case PLUS :
		automate.decalage(s, new E4);
		break;
		case MULT :
		automate.decalage(s,new E5);
		break;
        case CLOSEPAR :
        automate.decalage(s,new E9);
        break;
        // Gestion des erreurs ? 
	}
	return false;
}




