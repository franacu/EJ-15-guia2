//
// Created by Fran on 23/05/2024.
//

#ifndef EJ16_GUIA2_HELPER_H
#define EJ16_GUIA2_HELPER_H
typedef struct nodo
{
    int num;
    struct nodo *sig;
}Nodo;
typedef struct Lista
{
    Nodo *cab;
}Lista;

Nodo *newNodo(int num);
Lista *newLista();
void agregarDato(Nodo *nodoAI,Lista *lista);
void unirLista(Lista *lista1, Lista*lista2, Lista*lista3);
void ordenar(Lista *lista);
void imprimirLista(Lista *lista);



#endif //EJ16_GUIA2_HELPER_H
