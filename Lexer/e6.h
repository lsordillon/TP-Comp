#pragma once

#include <string>
#include "symbole.h"
#include "etat.h"
#include "e4.h"
#include "e5.h"
#include "e9.h"
#include "automate.h"


using namespace std;

class E6 : public Etat{

   public:
      E6() : Etat("E6") { }
      ~E6() { }
      
      bool transition(Automate & automate, Symbole * s);
};

