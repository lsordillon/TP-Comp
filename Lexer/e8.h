#pragma once

#include <string>
#include "symbole.h"
#include "etat.h"
#include "automate.h"


using namespace std;

class E8 : public Etat{

   public:
      E8() : Etat("E8") { }
      ~E8() { }
      
      bool transition(Automate & automate, Symbole * s);
};

