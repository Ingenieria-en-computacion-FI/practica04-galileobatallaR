#ifndef NODO2_H
#define NODO2_H

#include <stdbool.h>

typedef struct Nodo {
    int dato;
    struct Nodo* siguiente;
} Nodo;

Nodo* crearNodo(int v);
Nodo* crearArregloNodos(int cant);
Nodo* agregarNodo(Nodo* ptr_base, int* size, int v);
void liberarNodos(Nodo* ptr, int n);
Nodo* construirTresNodos();
int contarNodos(Nodo* head);
Nodo* crearNodosPorEntrada();

#endif
