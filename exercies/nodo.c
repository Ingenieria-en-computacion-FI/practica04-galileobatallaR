#include "nodo2.h"
#include <stdio.h>
#include <stdlib.h>

/* Ejercicio 1 */
Nodo* crearNodo(int contenido){
    Nodo* elemento = NULL;
    elemento = (Nodo*)malloc(sizeof(Nodo));
    if(elemento != NULL){
        elemento->dato = contenido;
        elemento->siguiente = NULL;
    }
    return elemento;
}

/* Ejercicio 2 */
Nodo* crearArregloNodos(int m){
    Nodo* tabla = NULL;
    tabla = (Nodo*)calloc(m, sizeof(Nodo));
    return tabla;
}

/* Ejercicio 3 */
Nodo* agregarNodo(Nodo* lista, int* cantidad, int contenido){
    Nodo* auxiliar = NULL;
    auxiliar = (Nodo*)realloc(lista, (*cantidad + 1) * sizeof(Nodo));
    if(auxiliar != NULL){
        auxiliar[*cantidad].dato = contenido;
        auxiliar[*cantidad].siguiente = NULL;
        (*cantidad)++;
    }
    return auxiliar;
}

/* Ejercicio 4 */
void liberarNodos(Nodo* bloque, int m){
    free(bloque);
}

/* Ejercicio 5 */
Nodo* construirTresNodos(){
    Nodo* raiz = NULL;
    Nodo* primero = (Nodo*)malloc(sizeof(Nodo));
    Nodo* segundo = (Nodo*)malloc(sizeof(Nodo));
    Nodo* tercero = (Nodo*)malloc(sizeof(Nodo));
    if(primero && segundo && tercero){
        primero->dato = 1;
        segundo->dato = 2;
        tercero->dato = 3;
        primero->siguiente = segundo;
        segundo->siguiente = tercero;
        tercero->siguiente = NULL;
        raiz = primero;
    }
    return raiz;
}

/* Ejercicio 6 */
int contarNodos(Nodo* inicio){
    int contador = 0;
    Nodo* paso = inicio;
    while(paso != NULL){
        contador++;
        paso = paso->siguiente;
    }
    return contador;
}

/* Ejercicio 7 */
Nodo* crearNodosPorEntrada(){
    Nodo* cabeza = NULL;
    Nodo* cola = NULL;
    int lectura;
    while(1){
        scanf("%d", &lectura);
        if(lectura == 0)
            break;
        Nodo* temporal = crearNodo(lectura);
        if(cabeza == NULL){
            cabeza = temporal;
            cola = temporal;
        }else{
            cola->siguiente = temporal;
            cola = temporal;
        }
    }
    return cabeza;
}
