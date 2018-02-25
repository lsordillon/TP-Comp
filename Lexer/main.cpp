#include <iostream>
#include "lexer.h"
#include "automate.h"
#include "etat.h"


int main(int i, char * entre [] ) {
  
    
    //Tentative de lecture sur un élément
   string chaine(entre[1]);
    //string chaine("(1*1)*(2+3)");
    
    Automate * a = new Automate();
    a->init();
    cout<<endl;
    
    Lexer l(chaine);
    
    Symbole * s=l.Consulter();
    
    while(*s!=FIN && *s!=ERREUR){
        s->Affiche();
        cout<<endl;
    
        Etat * etatActuel = a->getEtat();
        cout<<endl;
        etatActuel->transition(*a,s);
        l.Avancer();
        s=l.Consulter();
        if(*(a->getSymbole())==ERREUR){
            s=a->getSymbole();
        }
    }
    s->Affiche();
    cout<<endl;
    
    Etat * etatActuel = a->getEtat();
    etatActuel->transition(*a,s);
    if(*s!=ERREUR){
        a->Resultat();
    }
   return 0;
    
    
    //Lit notre symbole s
    //regarde l'état actuel E? en haut de la pile de l'automate a
    //Lance E?::transition(s,a)
    // lit un nouvel élément
}

