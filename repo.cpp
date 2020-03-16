#include <vector>
#include "domain.h"
#include "repo.h"

using namespace std;

void Repo::addElem(Cheltuieli obj) {
    repo.push_back(obj);
}

int Repo::getSize() const {
    return this->repo.size();
}

vector<Cheltuieli> Repo::getAll() const {
    return this->repo;
}