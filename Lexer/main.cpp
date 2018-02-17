#include <iostream>
#include "lexer.h"


int main(void) {
   string chaine("(1+34)*123");

   Lexer l(chaine); 

   Symbole * s;
   while(*(s=l.Consulter())!=FIN) {
      s->Affiche();
      cout<<endl;
      l.Avancer();
   }
   return 0;
    
    
    //Lit notre symbole s
    //regarde l'état actuel E? en haut de la pile de l'automate a
    //Lance E?::transition(s,a)
    // lit un nouvel élément
}

