#include <iostream>
#include "lexer.h"
#include "automate.h"
#include "etat.h"


int main(void) {
  /*string chaine("(1+34)*123");

   Lexer l(chaine); 

   Symbole * s;
   while(*(s=l.Consulter())!=FIN) {
      s->Affiche();
      cout<<endl;
      l.Avancer();
   }*/
    
    //Tentative de lecture sur un élément
   string chaine("22");
    Automate * a = new Automate();
    a->init();
    cout<<endl;
    
    Lexer l(chaine);
    
    Symbole * s;
    s=l.Consulter();
    s->Affiche();
    cout<<endl;
    
    Etat * etatActuel = a->getEtat();
    cout<<endl;
    etatActuel->transition(*a,s);
    
    
   return 0;
    
    
    //Lit notre symbole s
    //regarde l'état actuel E? en haut de la pile de l'automate a
    //Lance E?::transition(s,a)
    // lit un nouvel élément
}

