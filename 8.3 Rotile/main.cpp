#include <iostream>
#include<string>
#include "Janta.h"
#include "Anvelopa.h"
#include "Roata.h"
#include "Masina.h"

using namespace std;

int main()
{
    Anvelopa cauc1;
    Janta janta1;
    Roata rVara1{cauc1, janta1};
    Roata rVara2{rVara1};
    Roata rVara3{rVara1};
    Roata rVara4{rVara1};
    Masina bmw{rVara1, rVara2, rVara3, rVara4};
    bmw.AfiseazaStareRoti("BMW-ul");
    bmw.AfiseazaTipCauciucuri("BMW-ul");
    Anvelopa cauc2("Hancook", 2.2, iarna);
    Janta janta2{5, tabla, 14};
    Roata rIarna1{cauc2, janta2};
    Roata rIarna2{rIarna1};
    Roata rIarna3{rIarna1};
    Roata rIarna4{rIarna1};
    bmw.SchimbaRoti(rIarna1, rIarna2, rIarna3, rIarna4);
    bmw.AfiseazaTipCauciucuri("BMW-ul");
    Masina toyota{rIarna1, rIarna2, rIarna3, rIarna4};
    toyota.AfiseazaStareRoti("Toyota");
    toyota.AfiseazaTipCauciucuri("Toyota");
    toyota.UmflaRoata(0,0.5);
    toyota.AfiseazaStareRoti("Toyota");
    toyota.SchimbaRoata(0, rVara1);
    toyota.AfiseazaStareRoti("Toyota");
    toyota.AfiseazaTipCauciucuri("Toyota");


    return 0;
}
