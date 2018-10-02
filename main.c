#include <stdio.h>
#include <stdlib.h>
#include "pilaDinamica.h"
#include "colaDinamica.h"


int ProbarCola()
{
    printf("Hello world!\n");
    tcolaD p1;
    ccrearD(&p1);
    int i=0;
    tdato dato;
    while(!cllenaD(&p1)&&(i<12))/* se usa i como indice para encolar algunos elementos */
    {
        cponerD(&p1, i);
        printf("Elemento %d\n", i);
        i++;
    }
        while(!cvaciaD(&p1))
    {
        csacarD(&p1, &dato);
        printf("Sacando Elemento de cola: %d\n", dato);
        i--;
    }

    if(cvaciaD(&p1))
        printf("La cola esta vacia");

    if(!cllenaD(&p1))
        printf("La cola no esta llena");

    getchar();
    return 0;
}





int ProbarPila()
{
    printf("Hola mundo!\n");
    TPilaD p1;
    pcrearD(&p1);
    int i=1;
    tdato w;
    while((i<11)&&(!pllenaD(&p1))) /* se usa i como indice para colocar algunos elementos */
    {
      pponerD(&p1, i);
      printf("Apilando Elemento: %i\n ", i);
      i++;
    }

    while(!pvaciaD(&p1))
    {
      psacarD(&p1, &w);
      printf("Desapilando Elemento: %i\n ", w);
      i--;
    }

    if(pvaciaD(&p1))
    {
      printf("La pila quedo vacia\n");
    }

    if(!pllenaD(&p1))
    {
      printf("La pila no esta llena\n");
    }

    return 0;
}


int main()
{
  ProbarCola();
  ProbarPila();

  return 0;
}