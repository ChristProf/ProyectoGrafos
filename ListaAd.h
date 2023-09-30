typedef struct Nodo{
    int dato;
    Nodo* sig;
}Nodo;

const int T=5;

typedef Nodo *Lista;

typedef Lista ListaAd[T];

void crearGrafoLista(ListaAd  &l);
void agregarAristaLista(ListaAd &l, int v, int u);
void agregarAristaListaSimple(ListaAd &l, int v, int u);
bool hayAristaLista(ListaAd l, int v, int u);
int cantidadAristasLista(ListaAd l);
void verticesAdyacentesLista(ListaAd l, int v);
int gradoVerticeLista(ListaAd l, int v);
void eliminarAristaLista(ListaAd &l, int v, int u);
void eliminarAristaListaSimple(ListaAd &l, int v, int u);
void desplegarGrafoLista(ListaAd &l);
void dfsLista(ListaAd l, int v, bool visitado[]);