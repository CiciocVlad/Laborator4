#include <iostream>
#include "domain.h"

using namespace std;

ostream& operator <<(ostream& out, const Cheltuieli& entity) {
    out << "suma de " << entity.suma << " RON pentru apartamentul " << entity.apartament << " pentru " << entity.cheltuiala;
    return out;
}