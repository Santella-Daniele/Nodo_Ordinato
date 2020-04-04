#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

void stampa(Puntatore nodoInserito)
{
    while (nodoInserito != NULL) {
        printf("%d ---> ", nodoInserito->valore);
        nodoInserito = nodoInserito->next;
    }
    printf("NULL\n");
}

void inserisci(Puntatore *testa, int valore)
{
    Puntatore nodoInserito = *testa;
    Puntatore vapp = NULL;

    Puntatore n = malloc(sizeof(Nodo));
    n->valore = valore;
    n->next = NULL;

    
    while (nodoInserito != NULL && nodoInserito->valore < valore) {
        vapp = nodoInserito;
        nodoInserito= nodoInserito->next;
    }

    if (vapp == NULL) {
        
        n->next = *testa;
        *testa =n;
    } else {
        
        vapp->next = n;
        n->next = nodoInserito;
    }
}



void rimuovi(Puntatore *testa, int valore)
{
    Puntatore nodoInserito = *testa;
    Puntatore vapp = NULL;
    Puntatore n = NULL;

    while (nodoInserito != NULL && nodoInserito->valore < valore) {
        vapp = nodoInserito;
        nodoInserito = nodoInserito->next;
    }

    
    if (nodoInserito == NULL) {
        printf("elemento %d non trovato\n", valore);
        return;
    }

    printf(" elemento %d trovato\n", valore);

   
    if (vapp == NULL) {
        printf("L'elemento da eliminare e' in testa\n");
        n = *testa;           
        *testa = (*testa)->next;  
        free(n);             
        return;
    }

    /* L'elemento da eliminare e' prev->next */
    printf("L'elemento da eliminare non e' in testa\n");
    n = vapp->next;
    vapp->next = n->next;
    free(n);
}

void pulisci(Puntatore *testa)
{
    Puntatore n;

    while (*testa != NULL) {
        n = *testa;    
        *testa = (*testa)->next;
        
        printf("Pulisci nodo con valore %d\n", n->valore);
        free(n);
    }
}