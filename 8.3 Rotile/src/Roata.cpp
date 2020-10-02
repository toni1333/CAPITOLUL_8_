#include "Roata.h"


Roata::Roata(Anvelopa x, Janta y): _anvelopa{x}, _janta{y}
{
    //ctor cu 2 param...
}

Roata::~Roata()
{
    //dtor
}
bool Roata::IsFlat(){
    if(_anvelopa.getPresiune()>1)
        return true;
    else
        return false;
}
void Roata::SchimbaRoata(Anvelopa schimbA, Janta schimbJ){
    _anvelopa=schimbA;
    _janta=schimbJ;
}
void Roata::UmflaRoata(double presiune){
 _anvelopa.UmflaAnvelopa(presiune);
}

TipAnvelopa Roata::GetTipAnvelopa(){
return _anvelopa.getTipAnvelopa();
}
float Roata:: arataInstant1(){                // functie suplimentara secundara
return _anvelopa.getPresiune();}
