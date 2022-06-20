//
// Created by HP on 30-May-22.
//
#include<string>
#include "Comanda.h"
using namespace std;

int Comanda::contor = 0;

Comanda::Comanda(string nume) {
    this->id = contor++;
    this->nume = nume;
}

int Comanda::getId() {
    return this->id;
}

string Comanda::getProduseComandate(CosCumparaturi cos) {
    string produse_ca_string;
    for (auto produs : cos.getProduse()) {
        produse_ca_string += produs.toString();
    }
}
