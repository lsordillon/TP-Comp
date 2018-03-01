#pragma once

#include <string>
#include <deque>
#include "symbole.h"
#include "etat.h"
#include "e0.h"
#include "e1.h"
#include "e6.h"
#include "e7.h"
#include "e8.h"

using namespace std;

class Automate {

   public:
		Automate(){ }
		~Automate() { }

		/**
		 * Cree l'automate en l'initalisant a E0
		 */ 
		void init();
		
		/**
		 * Realise le decalage vers l'etat e
		 */ 
		void decalage(Symbole * s, Etat * e);
		
		/**
		*Supprime les n etats de la pile d'etats lors de la reduction
		*/
		void reduction( int n);
		
		/**
		 * Depile le dernier symbole de la pile
		 */ 
		void destroySymbole();
		
		/**
		 * Retourne et depile le dernier symbole de la pile
		 */ 
		Symbole * getAndDestroySymbole();
		
		/**
		 * Affiche le resultat du calcul de la chaine analyse
		 */ 
		void Resultat ();
		
		/**
		 * Par choix, les symboles non terminaux ne possedent pas de
		 * symbole les implementant dans le programme. Afin que le programme
		 * ne boucle pas sur lui même lorsqu'il retourne sur E0 apres 
		 * une reduction, il faut donc retouner l'etat resultant de la 
		 * reduction
		 */ 
		Etat * getDecalageNonTerminaux();
		
		/**
		 * Retourne l'etat courant 
		 */ 
		Etat * getEtat();
		
		/**
		 * Retourne le symbole courant 
		 */
		Symbole * getSymbole ();
		
		/**
		 * Empile le symbole ERREUR
		 */ 
		void Erreur();


   protected:
   
   /**
    * Pile des symboles
    */ 
    deque <Symbole *> symbolestack;
    
    /**
     * Pile des etats
     */ 
    deque <Etat *> etatstack;
    
};

