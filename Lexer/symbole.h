#pragma once

#include <string>
using namespace std;

enum Identificateurs { OPENPAR, CLOSEPAR, PLUS, MULT, INT, FIN, ERREUR };

const string Etiquettes[] = { "OPENPAR", "CLOSEPAR", "PLUS", "MULT", "INT", "FIN", "ERREUR" };

class Symbole {
	
	
   public:
      Symbole(int i) : ident(i) {  }
      virtual ~Symbole() { }
      operator int() const { return ident; }
      virtual void Affiche();
   
   protected:
      int ident;
}; 

class Entier : public Symbole {
	public:
		Entier(int v) : Symbole(INT), valeur(v) { }
		~Entier() { }
		
		/**
		 * Affiche la valeur de l'entier correspondant  
		 */
		virtual void Affiche();
      
		/**
		*Additionne deux entiers et retourne l'entier calcule
		*/
		Entier * Addition(Entier * e2);
		
		/**
		*Multiplie deux entiers et retourne l'entier calcule
		*/
		Entier * Multiplication(Entier * e2);
    

    
   protected:
      int valeur;
};

