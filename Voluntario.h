#ifndef VOLUNTARIO_H
#define VOLUNTARIO_H

#include <string>
#include <iostream>
using namespace std;

class Voluntario {
private:
    string nombre;
    int horas;

public:
    Voluntario() : nombre(""), horas(0) {}   // ← constructor vacío agregado

    Voluntario(string n, int h) : nombre(n), horas(h) {}

    string getNombre() const { return nombre; }
    int getHoras() const { return horas; }
};

#endif
