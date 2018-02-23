#include "e1.h"
#include <iostream>

bool E1::transition(Automate & automate, Symbole * s) {
	switch (*s){
		case PLUS :
		automate.decalage(s, new E4);
		break;
		case MULT :
		automate.decalage(s,new E5);
		break;
        case FIN :
            cout<<"TERMINE"<<endl;
            break;
        //Cas accepter / fin ?
        // Gestion des erreurs ? 
	}
	return false;
}




