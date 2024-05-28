
typedef struct{
    int id;
    Aristas* vecinos;
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

/* Heapify(int array, int array_size, int i){ //i es la raíz al principio
    int smallest = i;
    int leftChild = 2*i+1;
    int rightChild = 2*i+2;
    if(leftChild < array_size && array[left] < array[smallest]){
        smallest = left;
    }
    if(right < array_size && array[right] < array[smallest]){
        smallest = right;
    }
    if(smallest!=i){
        swap(array[i],array[smallest]);
        heapify(array, array_size, smallest) // llamada recursiva
    }
}
*/ 

/* swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
*/ 

/* decreaseKeyHeap(array){
    
}
*/ 

/* decreaseKeyFibonacci(){
    
}
*/ 

/* extractMin(heap){
    if(heap->size == 1){
        return heap->array[0];
    }
    int root = heap->array[0];
    heap->array[0] = heap->array[]
}
*/ 