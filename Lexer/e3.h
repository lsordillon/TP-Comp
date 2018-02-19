#pragma once

#include <string>
#include "symbole.h"
#include "etat.h"
#include "e1.h"
#include "automate.h"


using namespace std;

class E3 : public Etat{

   public:
      E3() : Etat("E3") { }
      ~E3() { }
      
      bool transition(Automate & automate, Symbole * s);
};

