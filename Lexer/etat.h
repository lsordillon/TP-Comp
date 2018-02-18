#pragma once

#include <string>
#include "symbole.h"

class Automate;

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

