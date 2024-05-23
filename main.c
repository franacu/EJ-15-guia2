
#include "helper.h"


int main()
{
    Nodo *n1= newNodo(1);
    Nodo *n2= newNodo(4);
    Nodo *n3= newNodo(5);
    Nodo *n4= newNodo(3);
    Nodo *n5= newNodo(2);
    Nodo *n6= newNodo(6);

    Lista *lista1=newLista();
    Lista *lista2=newLista();
    Lista *lista3=newLista();

    agregarDato(n1,lista1);
    agregarDato(n2,lista1);
    agregarDato(n3,lista1);
    agregarDato(n4,lista2);
    agregarDato(n5,lista2);
    agregarDato(n6,lista2);
    imprimirLista(lista1);

    imprimirLista(lista2);

    unirLista(lista1, lista2, lista3);
    ordenar(lista3);


    return 0;
}
