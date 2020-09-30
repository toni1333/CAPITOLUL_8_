#include "Anvelopa.h"
#include "Janta.h"


Anvelopa::Anvelopa()
{
    _brand="Michelin";
    _presiune=2.2;
    _tipAnvelopa=vara;
    //ctor
}
Anvelopa::Anvelopa(std::string x, float y, TipAnvelopa z):_brand{x},_presiune{y},_tipAnvelopa{z}
{
    // ctor 3 param....
}

Anvelopa::~Anvelopa()
{
    //dtor
}
void Anvelopa::UmflaAnvelopa(float bagaAer)
{
    if(bagaAer>3){
        _presiune=3;
                    }
    else _presiune=bagaAer;
}
