#include "automate.h"
#include <iostream>

void Automate::decalage(Symbole * s, Etat * e){
	symbolestack.push_back(s);
	etatstack.push_back(e);
}
