#include "grafos.cpp"


int main(){
    bool visitado[N];
    grafo g;

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
    return 0;
}