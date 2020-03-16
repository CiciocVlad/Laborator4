#pragma once

#include <vector>
#include "domain.h"

using namespace std;

class Repo {
    vector<Cheltuieli> repo;
public:
    Repo() {}
    void addElem(Cheltuieli obj);
    int getSize() const;
    vector<Cheltuieli> getAll() const;
};