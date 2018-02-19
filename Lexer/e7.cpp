#include "e7.h"
#include <iostream>

bool E7::transition(Automate & automate, Symbole * s) {
	switch (*s){
        case MULT :
        automate.decalage(s,new E5);
        break;

		
        //Cas reduction --> R2
        // Gestion des erreurs ? 
	}
	return false;
}




