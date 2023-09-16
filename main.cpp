#include "grafos.cpp"


int main(){

    grafo g;

    crear(g);
    agregarArista(g, 1, 3);
    agregarArista(g, 3, 3);
    agregarArista(g, 4, 3);
    agregarArista(g, 6, 2);
    desplegarGrafo(g);
    cantidadAristas(g);
    printf("La cantidad de aristas es: %d\n", cantidadAristas(g));
    verticesAdyacentes(g, 3);

    return 0;
}