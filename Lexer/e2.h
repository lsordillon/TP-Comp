#pragma once

#include <string>
#include "symbole.h"
#include "etat.h"
#include "e3.h"
//#include "e6.h"
#include "automate.h"


using namespace std;

class E2 : public Etat{

   public:
      E2() : Etat("E2") { }
      ~E2() { }
      
      bool transition(Automate & automate, Symbole * s);
};

