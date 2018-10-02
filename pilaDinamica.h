#ifndef _PILAS_H_
#include <stdio.h>
#include <stdlib.h>

typedef int tdato;

typedef struct nodo
{
  tdato info;
  struct nodo *sig;
} Nodo;

typedef struct tpilad
{
  Nodo *cima;
} TPilaD;

// Definicion de procedimientos
void pcrearD(TPilaD *p);
int pllenaD(TPilaD *p);
int pvaciaD(TPilaD *p);
void pponerD(TPilaD *p, tdato x);
void psacarD(TPilaD *p, tdato *x);
void crearNodo(Nodo * nue,tdato x);

//Implementaciones desarrolladas

void pcrearD(TPilaD *p)
{
  p->cima = NULL;
}

int pllenaD(TPilaD *p)
{
  Nodo* aux = (Nodo*) malloc(sizeof(Nodo));
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
  Nodo *n;
  crearNodo(n, x);
  n->sig = p->cima;
  p->cima=n;
}

void psacarD(TPilaD *p, tdato *x)
{
  Nodo* aux = p->cima;
  *x = p->cima->info;
  p->cima= p->cima->sig;
  free(aux);
}

void crearNodo(Nodo* nue,tdato x)
{
  nue = (Nodo*) malloc(sizeof(Nodo));
  nue->sig = NULL;
  nue->info = x;
}

#endif