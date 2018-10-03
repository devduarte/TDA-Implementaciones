#include <stdio.h>
#include <stdlib.h>
#include "cola.h"

void esta_vacia(T_COLA *c1) {
    if (c_vacia(c1)) {
        printf("La cola está vacia\n");
    } else {
        printf("La cola no está vacia\n");
    }
}

void esta_llena(T_COLA *p1) {
    if (c_llena(p1)) {
        printf("La cola está llena\n");
    } else {
        printf("La cola no está llena\n");
    }
}

void test() {
    printf("Pruebas cola estática\n");
    T_COLA c1;
    t_dato w;
    int max = 15;

    c_crear(&c1);

    esta_vacia(&c1);
    esta_llena(&c1);

    int i = 1;
    while (i <= max && !c_llena(&c1)) {
        /* se usa i como índice para colocar algunos elementos */
        c_poner(&c1, i);
        printf("Agregando elemento a cola: %i\n ", i);
        i++;
    }

    esta_vacia(&c1);
    esta_llena(&c1);

    while (!c_vacia(&c1)) {
        c_sacar(&c1, &w);
        printf("Sacando elemento de cola: %i\n ", w);
        i--;
    }

    esta_vacia(&c1);
    esta_llena(&c1);
}

int main() {
    test();

    return 0;
}