#include "Cilindru.h"
#include "Cerc.h"
#include<cmath>

Cilindru::Cilindru(double p1,double p2):
    _baza{p1},_inaltime{p2}
{
//ctor
}
Cilindru::~Cilindru()
{
//dtor
}
double Cilindru::Volum(){
return (_baza.Arie()*_inaltime);
}
double Cilindru::ArieCilindru(){
return (2*_baza.Arie())+(2*pi*_baza.get_raza()*_inaltime);
}
