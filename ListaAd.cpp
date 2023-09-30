#include "ListaAd.h"
#include <stdio.h>
#include <stdlib.h>

void crearGrafoLista(ListaAd &l)
{
    for (int i = 0; i < T; i++) {
        l[i] = nullptr;
    }
}

void agregarAristaLista(ListaAd &l, int v, int u){
    agregarAristaListaSimple(l, v, u);
    agregarAristaListaSimple(l, u, v);
}

void agregarAristaListaSimple(ListaAd &l, int v, int u)
{
    Lista aux = (Lista)malloc(sizeof(Nodo));
    if(!hayAristaLista(l, v, u)){
        aux->dato = u;
        aux->sig = l[v];
        l[v] = aux;
    }
}

bool hayAristaLista(ListaAd l, int v, int u)
{
    bool resul=false;
    Lista actual = l[v];
    while (actual != NULL) {
        if (actual->dato == u) {
            resul=true; 
        }
        actual = actual->sig;
    }
    return resul;
}

int cantidadAristasLista(ListaAd l)
{
    int cantidadLazos=0, cantidadAri=0;
    for (int i = 0; i < T; i++)
    {
        Lista aux = l[i];
        while (aux != NULL) {
            if (i==aux->dato)
            {
                cantidadLazos++;
            }else{
                cantidadAri++;
            }
            aux = aux->sig;
        }
    }
    return (cantidadAri/2)+cantidadLazos;
}

void verticesAdyacentesLista(ListaAd l, int v)
{
    Lista aux = l[v];
    while (aux != NULL) {
        if(aux->dato!=v){
            printf("%d ", aux->dato);
        }
        aux = aux->sig;
    }
}

int gradoVerticeLista(ListaAd l, int v)
{
    int grado=0;
    Lista aux = l[v];
    while (aux != NULL) {
        if(aux->dato!=v){
            grado++;
        }else{
            grado+=2;
        }
        aux = aux->sig;
    }
    return grado;
}

void eliminarAristaLista(ListaAd &l, int v, int u){
    eliminarAristaListaSimple(l, v, u);
    eliminarAristaListaSimple(l, u, v);
}

void eliminarAristaListaSimple(ListaAd &l, int v, int u)
{
    bool band=true;
    Lista actual = l[v];
    Lista anterior = NULL;

    while (actual != NULL && band) {
        if (actual->dato == u) {
            if (anterior == NULL) {
                l[v] = actual->sig;
            } else {
                anterior->sig = actual->sig;
            }
            free(actual);
            band=false;
            continue;
        }
        anterior = actual;
        actual = actual->sig;
    }

}

void desplegarGrafoLista(ListaAd &l)
{
    for (int i = 0; i < T; i++)
    {
        printf("Posicion %d: ", i);
        Lista aux = l[i];
        while (aux != NULL) {
            printf("%d -> ", aux->dato);
            aux = aux->sig;
        }
        printf("NULL\n");
    }
    
}

void dfsLista(ListaAd l, int v, bool visitado[])
{
    printf("%d ", v);
    visitado[v] = true;
    
    Lista actual = l[v];
    while (actual != NULL) {
        int i = actual->dato;
        if (!visitado[i]) {
            dfsLista(l, i, visitado);
        }
        actual = actual->sig;
    }
}
