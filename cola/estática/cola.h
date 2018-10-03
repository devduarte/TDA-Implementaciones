#include<stdio.h>

#define MAXCOLA 15
#define PRIMERPOS 0
#define COLAVACIA -1

typedef int t_dato;

typedef struct t_cola {
    t_dato elem[MAXCOLA];
    int frente;
} T_COLA;

// Crea una cola
// Post: devuelve una nueva cola vacía
void c_crear(T_COLA *q);

// Devuelve verdadero o falso, según si la cola tiene o no elementos
// Pre: la cola fue creada
int c_vacia(T_COLA *q);

// Devuelve verdadero o falso, según si la cola está llena o no
// Pre: la cola fue creada
int c_llena(T_COLA *q);

// Agrega un nuevo elemento a la cola
// Pre: la cola fue creada
// Post: se agregó un nuevo elemento a la cola, valor se encuentra al final
// de la cola
void c_poner(T_COLA *q, t_dato dato);

// Saca el primer elemento de la cola. Si la cola tiene elementos, se quita el
// primero de la cola, y se devuelve su valor
// Pre: la cola fue creada y tiene al menos un elemento
// Post: se devolvió el valor del primer elemento anterior, la cola
// contiene un elemento menos, si no estaba vacía
void c_sacar(T_COLA *q, t_dato *dato);

