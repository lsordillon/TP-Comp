#pragma once

#include <string>
#include "symbole.h"
#include "etat.h"
#include "e1.h"
#include "automate.h"


using namespace std;

class E0 : public Etat{

   public:
      E0() : Etat("E0") { }
      ~E0() { }
      
      bool transition(Automate & automate, Symbole * s);
};

