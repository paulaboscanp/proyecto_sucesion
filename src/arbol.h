#ifndef ARBOL_H
#define ARBOL_H

#include "nodo.h"

class ArbolBinario {
private:
    Nodo* raiz;

public:
    ArbolBinario();

    Nodo* buscarNodo(Nodo* actual, int id);
    void insertarNodo(Nodo* nuevo);
    void cargarCSV();
    void mostrarArbol(Nodo* actual);
    Nodo* obtenerRaiz();
};

#endif