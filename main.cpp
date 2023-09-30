#include "grafos.cpp"
#include "ListaAd.cpp"


int main(){
    bool visitado[N], visitado2[T];
    grafo g;
    ListaAd l;
    crear(g);
    agregarArista(g, 0, 2);
    agregarArista(g, 0, 1);
    agregarArista(g, 0, 6);
    agregarArista(g, 6, 7);
    agregarArista(g, 2, 4);
    agregarArista(g, 2, 3);
    agregarArista(g, 3, 5);
    desplegarGrafo(g);
    cantidadAristas(g);
    printf("La cantidad de aristas es: %d\n", cantidadAristas(g));
    verticesAdyacentes(g, 0);
    printf("\nEl grado del vertice 3 es: %d\n", gradoVertice(g, 3));
    dfs(g, 0, visitado);
    printf("\n");
    crearGrafoLista(l);
    //agregarAristaLista(l, 3, 3);
    //agregarAristaLista(l, 2, 3);
    //agregarAristaLista(l, 2, 4);
    agregarAristaLista(l, 0, 1);
    agregarAristaLista(l, 0, 3);
    agregarAristaLista(l, 1, 2);
    agregarAristaLista(l, 2, 4);
    desplegarGrafoLista(l);
    printf("\n%d\n", cantidadAristasLista(l));
    verticesAdyacentesLista(l, 3);
    printf("\n%d\n", gradoVerticeLista(l, 3));
    //eliminarAristaLista(l, 3, 0);
    printf("\n\n");
    desplegarGrafoLista(l);
    printf("\n\n");
    dfsLista(l, 0, visitado2);


    return 0;
}