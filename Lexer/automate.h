#pragma once



#include <string>
#include <stack>
#include "symbole.h"
#include "etat.h"

using namespace std;

class Automate {

   public:
      Automate() { }
      ~Automate() { }
      
      void decalage(Symbole * s, Etat * e);
      void reduction( int n, Symbole * s);

   protected:
    stack <Symbole> symbolestack;
    stack <Etat> etatstack;
    
};

