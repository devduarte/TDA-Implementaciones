#ifndef _COLAS_H_

#include <stdio.h>
#include <stdlib.h>
#include "cola.h"

// Crea una cola
// Post: devuelve una nueva cola vacía
void c_crear(T_COLA *p) {
    *p = NULL;
}

// Devuelve verdadero o falso, según si la cola tiene o no elementos
// Pre: la cola fue creada
int c_llena(T_COLA *p) {
    NODO *aux = (NODO *) malloc(sizeof(NODO));
    int cllena = (aux == NULL);
    free(aux);
    return (cllena);
}

// Devuelve verdadero o falso, según si la cola está llena o no
// Pre: la cola fue creada
int c_vacia(T_COLA *p) {
    return *p == NULL;
}

// Agrega un nuevo elemento a la cola
// Pre: la cola fue creada
// Post: se agregó un nuevo elemento a la cola, valor se encuentra al final de la cola
void c_poner(T_COLA *p, t_dato x) {
    NODO *n = NULL;
    crearNodo(&n, x);
    if (*p == NULL) {
        *p = n;
    } else {
        NODO *aux = *p;
        while (aux->sig != NULL) {
            aux = aux->sig;
        }
        aux->sig = n;
    }
}

// Saca el primer elemento de la cola. Si la cola tiene elementos, se quita el primero de la cola, y se devuelve su valor
// Pre: la cola fue creada y tiene al menos un elemento
// Post: se devolvió el valor del primer elemento anterior, la cola contiene un elemento menos, si no estaba vacía
void c_sacar(T_COLA *p, t_dato *x) {
    NODO *aux = *p;
    (*x) = (*p)->info;
    (*p) = (*p)->sig;
    free(aux);
}

// Crea un nuevo nodo
void crearNodo(NODO **nue, t_dato x) {
    (*nue) = (NODO *) malloc(sizeof(NODO));
    (*nue)->sig = NULL;
    (*nue)->info = x;
}

#endif