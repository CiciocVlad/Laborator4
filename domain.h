#pragma once

#include <string>

using namespace std;

class Cheltuieli {
private:
    int apartament;
    string cheltuiala;
    int suma;
public:
    Cheltuieli(int a, string b, int c) : apartament(a), cheltuiala(b), suma(c) {}

    friend ostream& operator <<(ostream& out, const Cheltuieli& entity);
};