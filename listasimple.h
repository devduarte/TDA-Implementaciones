
 #ifndef LISTA_H
#define LISTA_H
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


typedef int tclave;

typedef struct datolistap
{
	tclave clave;
	int dato;
}tdato;

typedef struct nodo
{
    tdato info;
    struct nodo *sig;
} nodo;

typedef struct lista
{
	nodo *cab;
	nodo*actual;
} tlista;


void lcrear (tlista * l)
{
	l->cab = NULL;
}

int lvacia (tlista * l)
{
	return (l->cab == NULL);
}

void lppio (tlista * l)
{
	 l->actual = l->cab;
}

void lsig(tlista * l)
{
	l->actual = l->actual->sig;
}

int  lfin(tlista * l) {
	return l->actual == l->cab;
}

int lllena(tlista * l)
{
   nodo* aux = (nodo*) malloc(sizeof(nodo));
   int llena = aux == NULL;
   free(aux);
   return(llena);
}

void lmodificar (tlista *l, tdato aux)
{
    l->actual->info=aux;
}

void linfo(tlista * l, tdato *dato)
{
	*dato = l->actual->info;
}

 void crearNodo(nodo** nue, tdato x)
 {
   (*nue) = (nodo*) malloc(sizeof(nodo));
   (*nue)->sig = NULL;
   (*nue)->info = x;
 }

void linsertarorden (tlista * l, tdato x, char torden)
{
    nodo *nue = NULL;
    nodo *aux = NULL ;
    crearNodo(&nue, x);
    if (l->cab == NULL)
       l->cab = nue;
       else
       if ( ((l->cab->info.clave>x.clave)&&(toupper(torden)=='A')) ||
          ((l->cab->info.clave<x.clave))&&(toupper(torden)=='D'))
          {
            aux = l->cab;
            nue->sig=l->cab;
            while(aux->sig != l->cab)
            {
              aux = aux->sig;
            }
            aux->sig = nue;
            l->cab = nue;
          }
          else
          {
          aux=l->cab;
          while  ((aux->sig !=l->cab)
                 &&(((aux->sig->info.clave<x.clave)&&(toupper(torden)=='A'))
                 || ((toupper(torden)=='D') && (aux->sig->info.clave>x.clave))))
            {
                aux=aux->sig;
            }
            nue->sig=aux->sig;
         }
}




void lborrarppio (tlista *l)
{
    nodo * aux = l->cab;
    if(l->cab->sig = l->cab)
    {
      l->cab = NULL;
    }
    else
    {
      nodo *t = l->cab;
      while(t->sig != l->cab) {
        t = t->sig;
      }
      t->sig = l->cab->sig;
    }
    free(aux);
}

void linsertarppio(tlista *l, tdato x)
{
   nodo *nue = NULL;
   crearNodo(&nue, x);
  if (l->cab==NULL)
  {
    nue->sig = nue;
    l->cab = nue;
  }
  else
  {
    nue->sig=l->cab;
    nodo *t = l->cab;
    while(t->sig != l->cab)
    {
      t = t->sig;
    }
    t->sig = nue;
    l->cab = nue;
  }


}

void lborrarfin(tlista *l)
{
    nodo* t = NULL;
    nodo* aux = NULL;
    if (l->cab != l->cab->sig)
    {
        t=l->cab;
        while(t->sig != l->cab)
        {
          aux = t;
          t = t->sig;
        }
        aux->sig = l->cab;
    }
    else
    {
        l->cab = NULL;
        t = l->cab;
    }
    free(t);
}
void linsertarfin(tlista*l, tdato x)
{
   nodo *nue = NULL;
   nodo *aux = NULL;
   crearNodo(&nue, x);
   if (l->cab==NULL)
   {
     l->cab = nue;
     nue->sig = nue;
   }
   else
    {
      nue->sig = l->cab;
        aux=l->cab;
        while (aux->sig != l->cab)
              aux = aux->sig;
        aux->sig = nue;
	  }
}

void lborraractual(tlista *l)
{
   nodo *t = NULL;
   nodo * aux= NULL;
   t=l->actual;
   if (l->actual==l->cab)
    {
      if(l->cab->sig = l->cab)
      {
        l->cab = NULL;
        l->actual = NULL;
      }
      else
      {
        aux = l->cab;
        while(aux->sig != l->cab)
        {
          aux = aux->sig;
        }
        aux->sig = l->cab->sig;
        l->cab = l->cab->sig;
        l->actual = l->actual->sig;
      }
       l->cab=l->cab->sig;
    }
   else
	{
        aux=l->cab;
        while (aux->sig!=l->actual)
        {
               aux=aux->sig;
        }
        aux->sig=l->actual->sig;
        l->actual=l->actual->sig;
	}
	free(t);
}

 void lbuscar(tlista *l, tclave clave, int* i) {
   *i = 0;
   if((l->cab != NULL) && (l->cab->info.clave == clave)) {
     l->actual = l->cab;
     *i = 1;
   } else {
     if((l->cab->sig != l->cab) && (l->cab->info.clave == clave)) {
       l->actual = l->cab->sig;
       *i = 1;
     }
   }
   if((*i == 0) && (l->cab->sig->sig != l->cab)) {
     char c;
     if(l->cab->info.clave < l->cab->sig->info.clave) {
       c = 'A';
     } else {
       c = 'D';
     }

     nodo *aux = l->cab->sig->sig;
     while((aux != l->cab) &&
           (((c == 'A') && (aux->info.clave < clave)) || ((c == 'D') && (aux->info.clave > clave)))) {
       aux = aux->sig;
     }
     if((aux != l->cab) && (aux->info.clave == clave)) {
       l->actual = aux;
       *i = 1;
     }
   }
 }

#endif