#include <stdio.h>
#include "nodo.h"

int main()
{
    Puntatore testa = NULL;
   
    stampa(testa);

    inserisci(&testa, 4);
    stampa(testa);

    inserisci(&testa,8);
    stampa(testa);

    inserisci(&testa,11);
    stampa(testa);

    inserisci(&testa,1);
    stampa(testa);

    inserisci(&testa,6);
    stampa(testa);

    rimuovi(&testa,4);
    stampa(testa);

    rimuovi(&testa,6);
    stampa(testa);

    
    rimuovi(&testa,20);

    rimuovi(&testa,66);
   
    stampa(testa);

    pulisci(&testa);
    
    return 0;
}

  


