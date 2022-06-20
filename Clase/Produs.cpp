//
// Created by HP on 30-May-22.
//

//
// Created by HP on 29-May-22.
//

#include "Produs.h"
#include <iostream>
#include<string>

using namespace std;

Produs::Produs() {

}

Produs::Produs(string denumire, int cantitate, double pret) {
    this->denumire = denumire;
    this->cantitate = cantitate;
    this->pret = pret;
    this->id = contor++;

}

string Produs::getDenumire() {
    return this->denumire;
}

int Produs::getCantitate() {
    return this->cantitate;
}

double Produs::getPret() {
    return this->pret;
}

int Produs::getID() {
    return this->id;
}

int Produs::contor = 0;

void Produs::setCantitate(int cantitate) {
    this->cantitate = cantitate;

}

void Produs::setPret(double pret) {
    this->pret = pret;

}

string Produs::toString() {
    return this->id + " " + this->denumire + " " + to_string(this->cantitate) + "\n";
}

bool Produs::egal(Produs produs1) {
    return this->id == produs1.getID();
}
