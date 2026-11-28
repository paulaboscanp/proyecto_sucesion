#ifndef NODO_H
#define NODO_H

#include <string>
using namespace std;

class Nodo {
public:
    int id;
    string name;
    string last_name;
    char gender;
    int age;
    int id_boss;
    bool is_dead;
    bool in_jail;
    bool was_boss;
    bool is_boss;

    Nodo* izquierdo;
    Nodo* derecho;
    Nodo* padre;

    Nodo() {
        id = 0;
        name = "";
        last_name = "";
        gender = ' ';
        age = 0;
        id_boss = 0;
        is_dead = false;
        in_jail = false;
        was_boss = false;
        is_boss = false;

        izquierdo = nullptr;
        derecho = nullptr;
        padre = nullptr;
    }
};

#endif