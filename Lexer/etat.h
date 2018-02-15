#pragma once

//class Automate;

#include <string>
#include "symbole.h"
#include "automate.h"

using namespace std;

class Etat {

   public:
      Etat(string n) : nom(n) { }
      ~Etat() { }
      
      virtual bool transition(Automate & automate, Symbole * s) = 0;
      void Print() const; 

   protected:
      string nom;
};
