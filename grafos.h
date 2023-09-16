const int N=7;

typedef int grafo[N][N];

void crear(grafo &g);
void agregarArista(grafo &g, int v, int u);
bool hayArista(grafo g, int v, int u);
int cantidadAristas(grafo g);
void verticesAdyacentes(grafo g, int v);
int gradoVertice(grafo g, int v);
void eliminarArista(grafo &g, int v, int u);
void desplegarGrafo(grafo g);