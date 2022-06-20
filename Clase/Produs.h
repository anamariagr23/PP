//
// Created by HP on 30-May-22.
//
using namespace std;
#include <string>
#ifndef PROIECTPP_PRODUS_H
#define PROIECTPP_PRODUS_H

class Produs {
    string denumire;
    int cantitate;
    double pret;
    int id;
    static int contor;
public:
    Produs();
    Produs(string denumire, int cantitate, double pret);
    void setCantitate(int cantitate);
    void setPret(double pret);
    string getDenumire();
    int getCantitate();
    int setCantitate();
    double getPret();
    double setPret();
    int getID();
    string toString();
    bool egal(Produs produs2);

};

#endif //PROIECTPP_PRODUS_H
