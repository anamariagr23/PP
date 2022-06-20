//
// Created by HP on 30-May-22.
//

#ifndef PROIECTPP_COSCUMPARATURI_H
#define PROIECTPP_COSCUMPARATURI_H
#include <vector>
#include "Produs.h"
#include "Stoc.h"

using namespace std;

class CosCumparaturi {

    vector<Produs> produse;

public:

    void adauga_produs(Produs produs_pentru_adaugat, Stoc stoc) ;

    vector<Produs> getProduse();

};
#endif //PROIECTPP_COSCUMPARATURI_H
