#ifndef __PILAS_H_
#include <stdio.h>
#include "pila.h"

// Crea una pila
// Post: devuelve una nueva pila vacía
void p_crear(T_PILA *p) {
    p->cima = -1;
}

// Devuelve verdadero o falso, según si la pila tiene o no elementos apilados
// Pre: la pila fue creada
int p_vacia(T_PILA *p) {
    return (p->cima == -1);
}

// Devuelve verdadero o falso, según si la pila está llena o no
// Pre: la pila fue creada
int p_llena(T_PILA *p) {
    return (p->cima == MAXPILA);
}

// Agrega un nuevo elemento a la pila
// Pre: la pila fue creada
// Post: se agregó un nuevo elemento a la pila, el valor es la nueva cima
void p_poner(T_PILA *p, t_dato x) {
    p->cima = p->cima + 1;
    p->elem[p->cima] = x;
}

// Saca el elemento cima de la pila. Si la pila tiene elementos, se quita la cima de la pila, y se devuelve ese valor
// Pre: la pila fue creada y tiene al menos un elemento
// Post: si la pila no estaba vacía, se devuelve el valor de la cima anterior y la pila contiene un elemento menos
void p_sacar(T_PILA *p, t_dato *x) {
    *x = p->elem[p->cima];
    p->cima = p->cima - 1;
}

#endif