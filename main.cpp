#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <Windows.h>
#include "Clase/Produs.h"
#include "main2.cpp"
using namespace std;


void adaugare_produs(Produs i){
    ofstream fout("C:\\Users\\HP\\CLionProjects\\ProiectPP\\stoc.txt",std::ios_base::app);
    fout<<i.getDenumire()<<'\n'<<i.getCantitate()<<'\n'<<i.getPret()<<'\n';
    fout.close();
}
void meniu()
{
    cout<<"Adaugare produs in stoc......1\n";
    cout<<"Afisare stoc.................2\n";
    cout<<"Stergere produs din stoc.....3\n";
    cout<<"Modificare produs din stoc...4\n";
    cout<<"Iesire din progrm............0\n";
    //adaugare produs in cos - verificari daca se afla in vectorul de stoc ---- main1
    //vizualizare cos cumparaturi -- main2
    //modificare produs din cos- cantitate--main2
    //plasare comanda- golire cosCumparaturi.txt.txt , total , list produse comandate-main2
    //vizualizare comenzi-oriunde
}
void adaugare_in_stoc(){
    string denumire;
    cout<<"Deniumire: ";
    cin.ignore();
    getline(cin,denumire);
    int cantitate;
    double pret;
    cout<<"Cantitate: ";
    cin>>cantitate;
    cin.ignore();
    cout<<"Pret: ";
    cin>>pret;
    cin.ignore();
    adaugare_produs(Produs(denumire,cantitate,pret));// scriu in fisier
    system("pause");
    system("cls");
}

int main(){

    while(1!=0)
    {
        int alegere=-1;
        meniu();//apel de printare al meniului
        while (alegere<0 || alegere>5)
        {
            citire_produse();
            cout<<"\nIntroduceti numarul optiunii dorite: ";
            cin>>alegere;
            switch (alegere) {
                case 0:
                    return 0;
                case 1:
                    system("cls");
                    adaugare_in_stoc();
                    break;
                case 2:
                    system("cls");
                    afisare_produse();
                    break;
                case 3:
                    system("cls");
                    stergere_produse();
                    break;
                case 4:
                    system("cls");
                    modificare();
                    break;

            }
            produse.clear();
        }
    }

}