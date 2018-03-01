#include "lexer.h"
#include "automate.h"
#include "etat.h"

/**
 * Lit la chaine de charactere fournie a l'appel du programme et renvoie le resultat. 
 * Appel du programme de la forme <Analyseur.exe op>. Exemple :  <Analyseur.exe "1+22">. 
 * Si la chaine ne respecte pas * la grammaire, ERREUR est retournee.
 */
 int main(int i, char * entre [] ) {
  
	string chaine(entre[1]);
	//string chaine("(1*1)*(2+3)");
    
    
    //Initialisation de l'automate
    Automate * a = new Automate();
    a->init();
    
    Lexer l(chaine);
    
    Symbole * s=l.Consulter();
    
    
    //Tant qu'on atteint pas la fin de la chaine ou qu'une erreur est 
    //remontee, la lecture se poursuit
    while(*s!=FIN && *s!=ERREUR){
        
        //Affichage du symbole lu
        s->Affiche();
        
		
		//Affichage de l'etat actuel 
        Etat * etatActuel = a->getEtat();
        
		//Appel de la fonction de transtion de l'etat actuel	
        etatActuel->transition(*a,s);
        
        //Lecture du symbole suivant
        l.Avancer();
        s=l.Consulter();
        
        //Si le symbole courant dans l'automate est ERREUR, 
        // il ecrase le symbole de lecture afin d'arreter l'analyse
        if(*(a->getSymbole())==ERREUR){
            s=a->getSymbole();
        }
    }
    s->Affiche();
    
    
    //Si une erreur est retournee, le programme n'affiche pas de 
    //resultat calcule
    Etat * etatActuel = a->getEtat();
    etatActuel->transition(*a,s);
    if(*s!=ERREUR){
        a->Resultat();
    }
   return 0;
}

