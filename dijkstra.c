#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>


typedef struct{
    int id;
    Aristas* vecinos;
    int sizeVecinos;
}Nodo;

typedef struct{
    Nodo vecino;
    double peso;
}Aristas;

typedef struct{
    Par* distNodo;
    parRepresenta r;
    int indexMinDist;
    double minDist;
    int tamañoDistNodo;
}Q;

typedef struct{
    Nodo nodo1;
    Nodo nodo2;
}parRepresenta;

typedef struct{
    double distancia;
    Nodo n1;
}Par;

double* distancias;
int* previos;



int main(){

    //Por ahora tamaño V
    int tamañoV;
    //Lista que contiene a todos los nodos 
    Nodo* todosLosNodos;

    //Definimos dos arreglos distancias y previos
    double* distancias = malloc(sizeof(double) * tamañoV);
    int* previos = malloc(sizeof(int) * tamañoV);

    int distTA = 0;
    int prevTA = 0;

    //definir nodo raiz 
    //Por ahora creamos un nodo raiz pero en el final hay que elegirlo
    Nodo raiz, previoRaiz;
    raiz.id = 0;
    previoRaiz.id = -1;
    //la distancia del nodo raiz como 0
    distancias[distTA] = 0;
    distTA++;
    //su nodo previo como -1
    previos[prevTA] = -1;
    prevTA++;
    //agrear el par distancia=0 y nodo=raiz a Q
    Q q = {malloc(sizeof(Par) * tamañoV), 0, INFINITY, 0};
    Par inicial = {0, raiz};
    q.distNodo[q.tamañoDistNodo] = inicial;
    q.tamañoDistNodo++;

    //por cada nodo v distinto de la raiz
    for(int i = 0; i < tamañoV; i++){
        Nodo unNodo = todosLosNodos[i];
        if(unNodo.id != raiz.id){
            //Definimos distancias como infinita
            distancias[distTA] = INFINITY;
            distTA++;
            //previos como indefinido
            previos[prevTA] = NULL;
            prevTA++;
            //Agregamos el par distancia infinito y nodo v a q
            /*
            Esta parte de la creacion de q debe ser un heapify 
            o la cola de fibonacci
            */
            Par par = {INFINITY, unNodo};
            q.distNodo[q.tamañoDistNodo] = par;
            q.tamañoDistNodo++;
        }
    }
    //Creamos todo el q y aqui pasamos a heap o colas de fibonacci
    //o se hizo anteriormente en el for loop

    //Mientras q no este vacio 
    while(q.tamañoDistNodo != 0){
        //obtener el par (d,v) con menor distancia de q
        //eliminarlo de q 

        //por cada vecion de v 
            //
    }

    return 0;

}




void dijkstra(Nodo* nodos, int numNodos, int raiz){
    while (!estaVacio(heap??????)) {
        Par minPar = extraerMin(heap);
        int u = minPar.id;

        for (int i = 0; i < nodos[u].sizeVecinos; ++i) {
            int v = nodos[u].vecinos[i].vecino;
            double peso = nodos[u].vecinos[i].peso;
    }
        
}













/* DESACTUALIZADO
//PROBLEMA
/*
Distancias mas cortas en un grafo no dirigido con 
pesos estrictamente positivos. 
Definimos como el camino más corto entre dos vértices 
como el grupo de aristas que los conectan con el 
menor peso acumulado posible.


//Cada arista conecta dos nodos y tiene un peso
typedef struct{
    Nodo n1, n2;
    double w;
}Arista;

//Cada nodo se debe de poder identificar 
typedef struct{
    int id; 
}Nodo;

//estructura Q
/*
Guarda todos los nodos en una lista
Guarda todas las distancias en una lista 
El primer nodo de la lista es la raiz y la primera distancia es 0

typedef struct{
    double* distancias;
    Nodo* nodos;
    int tamañoActual;
    int minNodoID;
}Q;



int main(/*int argc, char const *argv[]){
    
    //int sizeVertices = argv[1];
    //int sizeAristas = argv[2];

    int sizeVertices = 0;
    int sizeAristas = 0;

    //Aqui estan todos los nodos del grafo
    Nodo* todosNodos = malloc(sizeof(Nodo) * sizeVertices);

    //-1 porque no incluyen a la raiz
    double* distancias = malloc(sizeof(double) * sizeVertices - 1);
    Nodo* previos = malloc(sizeof(Nodo) * sizeVertices - 1);

    Nodo raiz, prevRaiz;
    prevRaiz.id = -1;
    raiz.id = 0;

    Q q = {malloc(sizeof(double) * sizeVertices), malloc(sizeof(Nodo) * sizeVertices), 0, 0};
    q.distancias[q.tamañoActual] = 0;
    q.nodos[q.tamañoActual] = raiz;
    q.minNodoID = raiz.id;
    q.tamañoActual++;

    for(int i = 0; i < sizeVertices; i++){
        Nodo nodoActual = todosNodos[i];
        if(nodoActual.id != raiz.id){
            distancias[i] = INFINITY;
            previos[i] = nodoActual;
        }
    }
    return 0;
}
*/


