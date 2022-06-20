//
// Created by HP on 30-May-22.
//

#ifndef PROIECTPP_COMANDA_H
#define PROIECTPP_COMANDA_H
#include <string>
#include "iostream"
#include "vector"
#include "CosCumparaturi.h"

using namespace std;
class Comanda {

    int id;

    string nume;

public:

    static int contor;

    Comanda(string nume);

    int getId();

    string getNume() {
        return this->nume;
    }

    string getProduseComandate(CosCumparaturi cos) ;


};

#endif //PROIECTPP_COMANDA_H
