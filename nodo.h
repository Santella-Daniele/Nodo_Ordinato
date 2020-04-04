#ifndef NODO_H
#define NODO_H

struct nodo {
    int valore;
    struct nodo *next;
};

typedef struct nodo Nodo;
typedef struct nodo *Puntatore;

void stampa(Puntatore testa);
void inserisci(Puntatore *testa, int valore);
void rimuovi(Puntatore *testa, int valore);
void pulisci(Puntatore *testa);

#endif