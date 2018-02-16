#pragma once



#include <string>
#include <deque>
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
    deque <Symbole *> symbolestack;
    deque <Etat *> etatstack;
    
};

