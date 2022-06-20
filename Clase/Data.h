//
// Created by HP on 30-May-22.
//

#ifndef PROIECTPP_DATA_H
#define PROIECTPP_DATA_H
#include <ctime>
#include <string>
using namespace std;
class Data {

    time_t timp = time(0);

    tm *timp_local = localtime(&timp);

    string an = to_string(1900 + timp_local->tm_year);

    string luna = to_string(1 + timp_local->tm_mon);

    string zi = to_string(timp_local->tm_mday);

public:

    string getCurrentDate();

};
#endif //PROIECTPP_DATA_H
