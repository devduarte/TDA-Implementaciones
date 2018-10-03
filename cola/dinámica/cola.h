#ifndef _COLAS_H_

#include <stdio.h>
#include <stdlib.h>

typedef int t_dato;

typedef struct nodo {
    t_dato info;
    struct nodo *sig;
} NODO;

typedef NODO *T_COLA;

// Crea una cola
// Post: devuelve una nueva cola vacía
void c_crear(T_COLA *p);

// Devuelve verdadero o falso, según si la cola tiene o no elementos
// Pre: la cola fue creada
int c_vacia(T_COLA *p);

// Devuelve verdadero o falso, según si la cola está llena o no
// Pre: la cola fue creada
int c_llena(T_COLA *p);

// Agrega un nuevo elemento a la cola
// Pre: la cola fue creada
// Post: se agregó un nuevo elemento a la cola, valor se encuentra al final de la cola
void c_poner(T_COLA *p, t_dato x);

// Saca el primer elemento de la cola. Si la cola tiene elementos, se quita el primero de la cola, y se devuelve su valor
// Pre: la cola fue creada y tiene al menos un elemento
// Post: se devolvió el valor del primer elemento anterior, la cola contiene un elemento menos, si no estaba vacía
void c_sacar(T_COLA *p, t_dato *x);

// Crea un nuevo nodo
void crearNodo(NODO **nue, t_dato x);

#endif


