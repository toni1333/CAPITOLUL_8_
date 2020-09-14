#include "Cerc.h"
#include<cmath>

Cerc::Cerc(double paramRAZA):_raza{paramRAZA}
{
//ctor
}
Cerc::~Cerc()
{
//dtor
}
double Cerc::Arie(){
return (pi*pow(_raza,2));
}
double Cerc::get_raza(){
return _raza;
}
