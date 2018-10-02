#ifndef _COLAS_H_
#include <stdio.h>
#include <stdlib.h>

typedef int tdato;

typedef struct nodo
{
  tdato info;
  struct nodo *sig;
}Nodo;

typedef Nodo *tcolaD;

// Definicion de procedimientos
void ccrearD(tcolaD *p);
int cllenaD(tcolaD *p);
int cvaciaD(tcolaD *p);
void crearNodo(Nodo *nue,tdato x);
void cponerD(tcolaD *p, tdato x);
void csacarD(tcolaD *p, tdato *x);

//Implementaciones desarrolladas

void ccrearD(tcolaD* p)
{
  p = NULL;
}

int cllenaD(tcolaD* p)
{
  Nodo* aux = (Nodo*) malloc(sizeof(Nodo));
  int cllena = (aux == NULL);
  free(aux);
  return(cllena);
}

int cvaciaD(tcolaD* p)
{
  return(p == NULL);
}

void cponerD(tcolaD *p, tdato x)
{
  Nodo *n;
  crearNodo(n, x);
  if(p == NULL)
  {
    (*p) = n;
    int a =2;
  }
  else
  {
    Nodo* aux = (*p);
 /*   while(aux->sig != NULL)
    {
      aux = aux->sig;
    }
      aux->sig = n;*/
  }


}

void csacarD(tcolaD *p, tdato *x)
{
  Nodo *aux = (*p);
  (*x) = (*p)->info;
  (*p) = (*p)->sig;
  free(aux);
}

void crearNodo(Nodo* nue, tdato x)
{
  nue = (Nodo*) malloc(sizeof(Nodo));
  nue->sig = NULL;
  nue->info = x;
}

#endif


