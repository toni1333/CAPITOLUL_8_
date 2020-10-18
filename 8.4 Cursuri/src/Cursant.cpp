#include "Cursant.h"

Cursant::Cursant(S p1, S p2, S p3): Persoana{p1,p2,p3}
{
  _notaTeme=0;
  _notaTeste=0;
  _notaProiect=0;
}
Cursant::Cursant()
{
    //ctor
}
Cursant::~Cursant()
{
    //dtor
}
bool Cursant::HasGrades()
{
    if(_notaTeme>0 &&
       _notaTeste>0 &&
       _notaProiect> 0)
        return 1;
    else
        return 0;
}
bool Cursant::IsAverageOk()
{
    if(((_notaTeme+_notaTeste+_notaProiect)/3)>=7)
        return 1;
    else
        return 0;
}
S Cursant::Absolva()
{
  if(HasGrades()==0)
    return " nu are note suficiente! ";
  else if(HasGrades()==1&&IsAverageOk()==0)
    return " nu absolva! ";
  else
    return " absolva! ";
}
