#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int esta_vacia(T_PILA *p1) {
    if (p_vacia(p1)) {
        printf("La pila está vacia\n");
    } else {
        printf("La pila no está vacia\n");
    }
}

int esta_llena(T_PILA *p1) {
    if (p_llena(p1)) {
        printf("La pila está llena\n");
    } else {
        printf("La pila no está llena\n");
    }
}

int test() {
    printf("Pruebas pila dinámica\n");
    T_PILA p1;
    t_dato w;
    int max = 15;

    p_crear(&p1);

    esta_vacia(&p1);
    esta_llena(&p1);

    int i = 1;
    while (i <= max && !p_llena(&p1)) {
        /* se usa i como índice para colocar algunos elementos */
        p_poner(&p1, i);
        printf("Apilando elemento: %i\n ", i);
        i++;
    }

    esta_vacia(&p1);

    esta_llena(&p1);

    while (!p_vacia(&p1)) {
        p_sacar(&p1, &w);
        printf("Desapilando elemento: %i\n ", w);
        i--;
    }

    esta_vacia(&p1);

    esta_llena(&p1);

    return 0;
}

int main() {
    test();

    return 0;
};