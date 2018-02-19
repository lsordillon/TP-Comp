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
      void reduction( int n);
      void destroySymbole();
      Symbole * getAndDestroySymbole();
      Etat * getEtat();

   protected:
    deque <Symbole *> symbolestack;
    deque <Etat *> etatstack;
    
};

