#include <iostream>
#include "repo.h"
#include "domain.h"
#include "assert.h"

using namespace std;

void testCheltuieli() {
    Cheltuieli a(25, "gaz", 100);
    Repo repo;
    repo.addElem(a);
    assert(repo.getSize() == 1);
    for (auto i : repo.getAll())
        cout << i << endl;
}