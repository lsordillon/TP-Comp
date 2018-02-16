#pragma once

#include <string>
#include "symbole.h"
#include "etat.h"
#include "automate.h"


using namespace std;

class E5 : public Etat{

   public:
      E5() : Etat("E5") { }
      ~E5() { }
      
      bool transition(Automate & automate, Symbole * s);
};

