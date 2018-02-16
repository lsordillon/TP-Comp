#pragma once

#include <string>
#include "symbole.h"
#include "etat.h"
#include "e4.h"
#include "e5.h"
#include "automate.h"


using namespace std;

class E1 : public Etat{

   public:
      E1() : Etat("E1") { }
      ~E1() { }
      
      bool transition(Automate & automate, Symbole * s);
};

