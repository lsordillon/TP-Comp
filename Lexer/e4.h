#pragma once

#include <string>
#include "symbole.h"
#include "etat.h"
#include "e3.h"
#include "e2.h"
#include "automate.h"


using namespace std;

class E4 : public Etat{

   public:
      E4() : Etat("E4") { }
      ~E4() { }
      
      bool transition(Automate & automate, Symbole * s);
};

