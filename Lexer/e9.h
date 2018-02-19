#pragma once

#include <string>
#include "symbole.h"
#include "etat.h"
#include "automate.h"


using namespace std;

class E9 : public Etat{

   public:
      E9() : Etat("E9") { }
      ~E9() { }
      
      bool transition(Automate & automate, Symbole * s);
};

