//
// Created by HP on 30-May-22.
//

#include "cosCumparaturi.h"

void CosCumparaturi::adauga_produs(Produs produs_pentru_adaugat, Stoc stoc) {
    /*
    for (auto produs : stoc.getProduse())
        if (produs.egal(produs_pentru_adaugat)) {
            this->produse.push_back(produs_pentru_adaugat);
        }
        */
}

vector<Produs> CosCumparaturi::getProduse() {
    return this->produse;
}
