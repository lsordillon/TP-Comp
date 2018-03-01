#pragma once

#include <string>
#include "symbole.h"

class Automate;

using namespace std;

/**
 * Un etat est defini par un nom et une fonction de transition 
 */ 
class Etat {

   public:
      Etat(string n) : nom(n) { }
      ~Etat() { }
      
      //Fonction de transition de l'etat, retourne faux si la transition
      // est impossible.
      virtual bool transition(Automate & automate, Symbole * s) = 0;
      
      //Affiche le nom de l'etat
      void Print() const;
    string getNom();

   protected:
      string nom;
};

