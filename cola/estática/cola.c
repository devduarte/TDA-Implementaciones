#include<stdio.h>
#include "cola.h"

// Crea una cola
// Post: devuelve una nueva cola vacía
void c_crear(T_COLA *q) {
    q->frente = COLAVACIA;
}

// Devuelve verdadero o falso, según si la cola tiene o no elementos
// Pre: la cola fue creada
int c_vacia(T_COLA *q) {
    return (q->frente == COLAVACIA);
}

// Devuelve verdadero o falso, según si la cola está llena o no
// Pre: la cola fue creada
int c_llena(T_COLA *q) {
    return (q->frente == (MAXCOLA - 1));
}

// Agrega un nuevo elemento a la cola
// Pre: la cola fue creada
// Post: se agregó un nuevo elemento a la cola, valor se encuentra al final
// de la cola
void c_poner(T_COLA *q, t_dato dato) {
    q->frente = q->frente + 1;
    q->elem[q->frente] = dato;
}

// Saca el primer elemento de la cola. Si la cola tiene elementos, se quita el
// primero de la cola, y se devuelve su valor
// Pre: la cola fue creada y tiene al menos un elemento
// Post: se devolvió el valor del primer elemento anterior, la cola
// contiene un elemento menos, si no estaba vacía
void c_sacar(T_COLA *q, t_dato *dato) {
    (*dato) = q->elem[PRIMERPOS];
    for (int i = 0; i < q->frente; i++) {
        q->elem[i] = q->elem[i] + 1;
    }
    q->frente = q->frente - 1;
}
