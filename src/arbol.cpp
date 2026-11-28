#include "arbol.h"
#include <iostream>
#include <fstream>
#include <sstream>

ArbolBinario::ArbolBinario() {
    raiz = nullptr;
}

Nodo* ArbolBinario::obtenerRaiz() {
    return raiz;
}

void ArbolBinario::cargarCSV() {
    ifstream archivo("bin/datos.csv");

    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return;
    }

    string linea;
    string dato;

    getline(archivo, linea);

    while (getline(archivo, linea)) {
        stringstream ss(linea);

        Nodo* nuevo = new Nodo();

        getline(ss, dato, ',');
        nuevo->id = stoi(dato);

        getline(ss, nuevo->name, ',');

        getline(ss, nuevo->last_name, ',');

        getline(ss, dato, ',');
        nuevo->gender = dato[0];

        getline(ss, dato, ',');
        nuevo->age = stoi(dato);

        getline(ss, dato, ',');
        nuevo->id_boss = stoi(dato);

        getline(ss, dato, ',');
        nuevo->is_dead = stoi(dato);

        getline(ss, dato, ',');
        nuevo->in_jail = stoi(dato);

        getline(ss, dato, ',');
        nuevo->was_boss = stoi(dato);

        getline(ss, dato, ',');
        nuevo->is_boss = stoi(dato);

        cout << nuevo->id << " "
             << nuevo->name << " "
             << nuevo->last_name << endl;

        delete nuevo;
    }

    archivo.close();
}