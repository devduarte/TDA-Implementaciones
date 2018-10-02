#ifndef _COLAS_H_
#include <stdio.h>
#include <stdlib.h>

typedef int tdato;

typedef struct nodoCola
{
  tdato info;
  struct nodoCola *sig;
}NodoCola;

typedef NodoCola *tcolaD;

// Definicion de procedimientos
void ccrearD(tcolaD *p);
int cllenaD(tcolaD *p);
int cvaciaD(tcolaD *p);
void crearNodo(NodoCola **nue,tdato x);
void cponerD(tcolaD *p, tdato x);
void csacarD(tcolaD *p, tdato *x);

//Implementaciones desarrolladas

void ccrearD(tcolaD* p)
{
  *p = NULL;
}

int cllenaD(tcolaD* p)
{
  NodoCola* aux = (NodoCola*) malloc(sizeof(NodoCola));
  int cllena = (aux == NULL);
  free(aux);
  return(cllena);
}

int cvaciaD(tcolaD* p)
{
  return *p == NULL;
}

void cponerD(tcolaD *p, tdato x)
{
  NodoCola *n = NULL;
  crearNodo(&n, x);
  if( *p == NULL)
  {
    *p = n;
  }
  else
  {
    NodoCola* aux = *p;
    while(aux->sig != NULL)
    {
      aux = aux->sig;
    }
      aux->sig = n;
  }


}

void csacarD(tcolaD *p, tdato *x)
{
  NodoCola *aux = *p;
  (*x) = (*p)->info;
  (*p) = (*p)->sig;
  free(aux);
}

void crearNodo(NodoCola** nue,tdato x)
{
  (*nue) = (NodoCola*) malloc(sizeof(NodoCola));
  (*nue)->sig = NULL;
  (*nue)->info = x;
}

#endif


