#pragma once

#include <string>
#include "symbole.h"
#include "etat.h"
#include "e5.h"
#include "automate.h"


using namespace std;

class E7 : public Etat{

   public:
      E7() : Etat("E7") { }
      ~E7() { }
      
      bool transition(Automate & automate, Symbole * s);
};

