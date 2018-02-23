#pragma once



#include <string>
#include <deque>
#include "symbole.h"
#include "etat.h"
#include "e0.h"
#include "e1.h"
#include "e6.h"
#include "e7.h"
#include "e8.h"

using namespace std;

class Automate {

   public:
       Automate(){ }
      ~Automate() { }
    
    void init();
      void decalage(Symbole * s, Etat * e);
      void reduction( int n);
      void destroySymbole();
      Symbole * getAndDestroySymbole();
    void Resultat ();
      Etat * getEtat();
      Etat * getDecalageNonTerminaux();
    

   protected:
    deque <Symbole *> symbolestack;
    deque <Etat *> etatstack;
    
};

