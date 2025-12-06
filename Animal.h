#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string nombre;
    int edad;
    string estadoSalud;

public:
    Animal(string _nombre, int _edad, string _estadoSalud)
        : nombre(_nombre), edad(_edad), estadoSalud(_estadoSalud) {}

    // Getters
    string getNombre() const { return nombre; }
    int getEdad() const { return edad; }
    string getEstadoSalud() const { return estadoSalud; }

    // Setters
    void setNombre(string n) { nombre = n; }
    void setEdad(int e) { edad = e; }
    void setEstadoSalud(string s) { estadoSalud = s; }

    // Método virtual para demostrar polimorfismo
    virtual void hacerSonido() const = 0;
};

#endif
