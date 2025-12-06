#ifndef GATO_H
#define GATO_H

#include "Animal.h"

class Gato : public Animal {
private:
    bool esArisco;

public:
    Gato(string n, int e, string salud, bool arisco)
        : Animal(n, e, salud), esArisco(arisco) {}

    bool getArisco() const { return esArisco; }
    void setArisco(bool a) { esArisco = a; }

    void hacerSonido() const override {
        cout << nombre << " dice: Miau miau!" << endl;
    }
};

#endif
