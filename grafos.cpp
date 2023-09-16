#include "grafos.h"
#include <stdio.h>

void crear(grafo &g){
    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < N; i++)
        {
            g[j][i]=0;
        }
        
    }
    
}

void agregarArista(grafo &g, int v, int u)
{
    g[v][u]=1;
    if(v!=u){
        g[u][v]=1;
    }
}

bool hayArista(grafo g, int v, int u)
{
    bool band=true;
    if (v!=u){
        band=false;
    }
    return band;
}

int cantidadAristas(grafo g)
{
    int c=0;
    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < N; i++)
        {
            if (g[j][i]==1)
            {
                c++;
            }
            
        }
        
    }
    
    return c;
}

void verticesAdyacentes(grafo g, int v)
{
    for (int i = 0; i < N; i++)
    {
            if(g[v][i]&&v!=i){
                printf("%d ", i);
            }
    }
}

int gradoVertice(grafo g, int v)
{
    int gr=0;
    for (int i = 0; i < N; i++)
    {
        if (g[v][i])
        {
            if(v!=i){
                gr++;
            }else{
                gr+=2;
            }
        }
        
    }
    return gr;
}

void eliminarArista(grafo &g, int v, int u)
{
    g[v][u]=0;
    if(v!=u){
        g[u][v]=0;
    }

}

void desplegarGrafo(grafo g)
{
     for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < N; i++)
        {
            printf("%d ",g[j][i]);
        }   
        printf("\n");
    }
}

void dfs(grafo g, int v, bool visitado[])
{
    printf("%d ", v);
    visitado[v]=true;
    for (int i = 0; i < N; i++)
    {
        if (g[v][i]==1)
        {
            if (!visitado[i])
            {
                dfs(g, i, visitado);
            }
            
        }
        
    }
    
}
