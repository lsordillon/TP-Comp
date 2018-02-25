#include "e5.h"
#include <iostream>

bool E5::transition(Automate & automate, Symbole * s) {
	switch (*s){
		case INT :
		automate.decalage(s, new E3);
		break;
		case OPENPAR :
		automate.decalage(s,new E2);
		break;
        default :
            automate.Erreur();
            break;
	}
	return false;
}




