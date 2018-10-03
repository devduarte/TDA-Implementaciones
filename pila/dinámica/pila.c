#ifndef _PILAS_H_

#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

// Crea una pila
// Post: devuelve una nueva pila vacía
void p_crear(T_PILA *p) {
    p->cima = NULL;
}

// Devuelve verdadero o falso, según si la pila está llena o no
// Pre: la pila fue creada
int p_llena(T_PILA *p) {
    NODO *aux = (NODO *) malloc(sizeof(NODO));
    int pllena = aux == NULL;
    free(aux);
    return (pllena);
}

// Devuelve verdadero o falso, según si la pila tiene o no elementos apilados
// Pre: la pila fue creada
int p_vacia(T_PILA *p) {
    return (p->cima == NULL);
}

// Agrega un nuevo elemento a la pila
// Pre: la pila fue creada
// Post: se agregó un nuevo elemento a la pila, el valor es la nueva cima
void p_poner(T_PILA *p, t_dato x) {
    NODO *n = NULL;
    crear_nodo(&n, x);
    n->sig = p->cima;
    p->cima = n;
}

// Saca el elemento cima de la pila. Si la pila tiene elementos, se quita la cima de la pila, y se devuelve ese valor
// Pre: la pila fue creada y tiene al menos un elemento
// Post: si la pila no estaba vacía, se devuelve el valor de la cima anterior y la pila contiene un elemento menos
void p_sacar(T_PILA *p, t_dato *x) {
    NODO *aux = p->cima;
    *x = p->cima->info;
    p->cima = p->cima->sig;
    free(aux);
}

// Crea un nuevo nodo
void crear_nodo(NODO **nue, t_dato x) {
    (*nue) = (NODO *) malloc(sizeof(NODO));
    (*nue)->sig = NULL;
    (*nue)->info = x;
}

#endif