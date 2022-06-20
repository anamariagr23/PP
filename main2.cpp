//
// Created by HP on 30-May-22.
//
#include <fstream>
#include <iostream>
#include <vector>
#include "Clase/Produs.h"

vector<Produs> produse;
void citire_produse(){
    ifstream fin("C:\\Users\\HP\\CLionProjects\\ProiectPP\\stoc.txt");
    string denumire;
    while (getline(fin,denumire)){
        //fin.ignore();
        int cantitate;
        fin>>cantitate;
        fin.ignore();
        double pret;
        fin>>pret;
        fin.ignore();
        produse.push_back(Produs(denumire, cantitate, pret));
    }
    fin.close();
}
void afisare_produse()
{
    cout<<"Lista produse:"<<'\n';
    for(auto& produs:produse){
        cout<<"\n";
        cout<<"Denumire: "<<produs.getDenumire()<<'\n';
        cout<<"Cantitate: "<<produs.getCantitate()<<'\n';
        cout<<"Pret: "<<produs.getPret()<<'\n';


    }
    system("pause");
    system("cls");
}
int stergere_produse(){
    ofstream fout("C:\\Users\\HP\\CLionProjects\\ProiectPP\\stoc.txt",std::ios_base::out);
    string denumire;
    int pozitie;
    //sterg produs din vector
    //reactualizare fisier
    cin.ignore();
    cout<<"Introduceti numele produsului pe care doriti sa il stergeti  ";
    getline(cin,denumire);
    for (auto it = begin (produse); it != end (produse); ++it){
        if(denumire == it->getDenumire()){
            //int pozitie = it - produse.begin();
            produse.erase(it);
            break;
        }

    }
    for(auto& produs:produse){
        fout<<produs.getDenumire()<<'\n'<<produs.getCantitate()<<'\n'<<produs.getPret()<<'\n';
    }
    fout.close();
    system("pause");
    system("cls");
}
void modificare(){
    ofstream fout("C:\\Users\\HP\\CLionProjects\\ProiectPP\\stoc.txt",std::ios_base::out);
    string denumire;
    int pozitie;
    cin.ignore();
    //sterg produs din vector
    //reactualizare fisier
    cout<<"Introduceti numele produsului pe care doriti sa il modificati ";
    getline(cin,denumire);
    int alegere;
    cout<<"Pentru modificare cantitate apasati tasta 1\n";
    cout<<"Pentru modificare pret apasati tasta 2\n";
    cin>>alegere;
    if(alegere==1){
        //fac modificare cantitate
        int cantitate;
        cout<<"Introduceti cantitatea dorita: ";
        cin>>cantitate;
        for(auto& produs:produse){
            if(produs.getDenumire()==denumire)
                produs.setCantitate(cantitate);
        }

    } else{
        //fac modificare pret
        double pret;
        cout<<"Introduceti pretul dorit: ";
        cin>>pret;
        for(auto& produs:produse){
            if(produs.getDenumire()==denumire)
                produs.setPret(pret);
        }
    }
    for(auto& produs:produse){
        fout<<produs.getDenumire()<<'\n'<<produs.getCantitate()<<'\n'<<produs.getPret()<<'\n';
    }
    fout.close();
    system("pause");
    system("cls");
}

/*
int main(){
    citire_produse();
    afisare_produse();
    //stergere_produse();
    modificare();
    afisare_produse();
}*/
