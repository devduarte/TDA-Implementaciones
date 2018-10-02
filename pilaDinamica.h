#ifndef _PILAS_H_
#include <stdio.h>
#include <stdlib.h>

typedef int tdato;

typedef struct nodo
{
  tdato info;
  struct nodo *sig;
} NodoPila;

typedef struct tpilad
{
  NodoPila *cima;
} TPilaD;

// Definicion de procedimientos
void pcrearD(TPilaD *p);
int pllenaD(TPilaD *p);
int pvaciaD(TPilaD *p);
void pponerD(TPilaD *p, tdato x);
void psacarD(TPilaD *p, tdato *x);
void crearNodoPila(NodoPila** nue, tdato x);

//Implementaciones desarrolladas

void pcrearD(TPilaD *p)
{
  p->cima = NULL;
}

int pllenaD(TPilaD *p)
{
  NodoPila* aux = (NodoPila*) malloc(sizeof(NodoPila));
  int pllena = aux == NULL;
  free(aux);
  return(pllena);
}

int pvaciaD(TPilaD *p)
{
  return(p->cima == NULL);
}

void pponerD(TPilaD *p, tdato x)
{
  NodoPila *n = NULL;
  crearNodoPila(&n, x);
  n->sig = p->cima;
  p->cima=n;
}

void psacarD(TPilaD *p, tdato *x)
{
  NodoPila* aux = p->cima;
  *x = p->cima->info;
  p->cima= p->cima->sig;
  free(aux);
}

void crearNodoPila(NodoPila** nue,tdato x)
{
  (*nue) = (NodoPila*) malloc(sizeof(NodoPila));
  (*nue)->sig = NULL;
  (*nue)->info = x;
}

#endif