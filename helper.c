//
// Created by Fran on 23/05/2024.
//
#include "stdio.h"
#include "stdlib.h"
#include "helper.h"
#include "string.h"
Nodo *newNodo(int num)
{
    Nodo *aux=malloc(sizeof(Nodo));
    if(aux==NULL)
    {
        printf("Error\n");
        return NULL;
    }else
        {
            aux->num=num;
            aux->sig=NULL;
            return aux;
        }

}
Lista *newLista()
{
    Lista *aux=malloc(sizeof(Lista));
    if(aux==NULL)
    {
        printf("Error\n");
        return NULL;
    }else
    {
        aux->cab=NULL;
        return aux;
    }
}
void agregarDato(Nodo *nodoAI,Lista *lista)
{
    if(lista->cab==NULL)
    {
        lista->cab=nodoAI;
    }else
        {
            Nodo *aux=lista->cab;
            while (aux->sig!=NULL)
            {
                aux=aux->sig;
            }
            aux->sig=nodoAI;
        }
}
void imprimirLista(Lista *lista)
{

    Nodo *aux=lista->cab;
    printf("\nLista:\n");
    while(aux!=NULL)
    {
        printf("%d,",aux->num);
        aux=aux->sig;
    }
}
void unirLista(Lista *lista1, Lista*lista2, Lista*lista3)
{
    if(lista1->cab==NULL)
    {
        lista3->cab=lista2->cab;
    }
    Nodo *aux1=lista1->cab;
    while(aux1->sig!=NULL)
    {
        aux1=aux1->sig;
    }
    aux1->sig=lista2->cab;
    lista3->cab=lista1->cab;
    Nodo *aux3=lista3->cab;

    printf("Lista unida:\n");
    while(aux3!=NULL)
    {
        printf("%d\n",aux3->num);
        aux3=aux3->sig;
    }
}
void ordenar(Lista *lista)
{
    Nodo *ant = lista->cab;
    while (ant != NULL) {
        Nodo *act = ant->sig;
        while (act != NULL) {
            if (ant->num > act->num) {
                int temp = ant->num;
                ant->num = act->num;
                act->num = temp;
            }
            act = act->sig;
        }
        ant = ant->sig;
    }
    ant=lista->cab;
    while (ant!=NULL)
    {
        printf("%d,",ant->num);
        ant=ant->sig;
    }
}