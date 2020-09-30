#include "Janta.h"

Janta::Janta()
{
    _nrPrezoane=5;
    _matJanta=aluminiu;
    _diametru=14;
    //ctor
}
Janta::Janta(unsigned int x,MatJanta y,float z):_nrPrezoane{x},_matJanta{y},_diametru{z}
{
    //ctor cu 3 param...
}
Janta::~Janta()
{
    //dtor
}
void Janta::SchimbaJanta(MatJanta matj,float dia){
_matJanta=matj;
_diametru=dia;
}
