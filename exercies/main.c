#include <stdio.h>
#include "nodo2.h"

int main() {
    printf("===== Repo de ejercicios de nodos =====\n");

    // Ejercicio 1
    Nodo* n1 = crearNodo(10);
    if (n1) printf("Nodo creado con dato: %d\n", n1->dato);

    // Ejercicio 2
    Nodo* arreglo = crearArregloNodos(5);
    printf("Arreglo de nodo:\n");
    for(int k=0; k<5; k++){
        printf("%d ", arreglo[k].dato);
    }
    printf("\n ");

    // Ejercicio 3
    int tam = 5;
    arreglo = agregarNodo(arreglo, &tam, 99);
    printf("Arreglo actualizado:\n");
    for(int j=0; j<tam; j++){
        printf("%d ", arreglo[j].dato);
    }
    printf("\n");

    // Ejercicio 4
    liberarNodos(arreglo, tam);
    liberarNodos(n1, 1);

    // Ejercicio 5
    Nodo* origen = construirTresNodos();
    printf("Lista construida:\n");
    Nodo* pasador = origen;
    while(pasador != NULL){
        printf("%d -> ", pasador->dato);
        pasador = pasador->siguiente;
    }
    printf("NULL\n");

    // Ejercicio 6
    int recuento = contarNodos(origen);
    printf("Total de nodos: %d\n", recuento);

    // Ejercicio 7
    printf("Ingresa numeros para crear nodos por entrada(0 para terminar):\n");
    Nodo* capturados = crearNodosPorEntrada();
    printf("Lista de entrada:\n");
    pasador = capturados;
    while(pasador != NULL){
        printf("%d -> ", pasador->dato);
        pasador = pasador->siguiente;
    }
    printf("NULL\n");

    return 0;
}
