#include "Masina.h"
#include<iostream>


Masina::Masina(Roata roata1, Roata roata2, Roata roata3, Roata roata4): _roti{roata1, roata2, roata3, roata4}
{
}

Masina::~Masina()
{
    //dtor
}
short Masina::_VerificaRoti()
{
    for(short i=0;i<4;++i){
       if(_roti[i].IsFlat()<1)
            return i;}
            return -1;


}
void Masina::AfiseazaStareRoti(std::string numeMasina){
    std::cout<<numeMasina;
    short control=0;
    control=_VerificaRoti();
    if(control<0)
        std::cout<<" are toate rotile in regula! "<<std::endl;
    else
        std::cout<<" are pana la roata: "<<control+1<<std::endl;
}
void Masina::UmflaRoti(double presiune){
    for(short i=0;i<4;++i)
    {        _roti[i].UmflaRoata(presiune);
    }
}
void Masina::UmflaRoata(short x, float aer){
   _roti[x].UmflaRoata(aer);
   }
void Masina::SchimbaRoti(Roata roata1, Roata roata2, Roata roata3, Roata roata4){
    _roti[0]=roata1;
    _roti[1]=roata2;
    _roti[2]=roata3;
    _roti[3]=roata4;

}
void Masina::SchimbaRoata(short careRoata, Roata parametru){
     _roti[careRoata]=parametru;
}
void Masina::AfiseazaTipCauciucuri(std::string numaMasina)
{
    std::cout<<numaMasina<<" are cauciucurile ";
    if((_roti[0].GetTipAnvelopa()==_roti[1].GetTipAnvelopa())&&(_roti[2].GetTipAnvelopa()==_roti[3].GetTipAnvelopa()))
    {
           switch(_roti[0].GetTipAnvelopa()) {
        case 1: std::cout << " de iarna"; break;
        case 2: std::cout << " de vara"; break;
        case 3: std::cout << " all season"; break;
        }
    }
    else{
        std::cout<<" mixte";
        }
        std::cout<<std::endl;
}
float Masina::afiseazaInstant(){           //  functie suplimentara

      for(short i=0; i<4;++i){
          switch(i+1){                                 //  aici optimizez Roata 1= Roata dreapta fata , etc....
 case 1: std::cout<<"Roata dreapta fata are: "<<_roti[i].arataInstant1()<<" ";
  if(_roti[i].GetTipAnvelopa()==1)
    std::cout<<" si cauciuc iarna"<<std::endl;
 else
    std::cout<<" si cauciuc vara"<<std::endl; break;
 case 2: std::cout<<"Roata stanga  fata are: "<<_roti[i].arataInstant1()<<" ";
  if(_roti[i].GetTipAnvelopa()==1)
    std::cout<<" si cauciuc iarna"<<std::endl;
 else
    std::cout<<" si cauciuc vara"<<std::endl; break;
 case 3: std::cout<<"Roata dreapta spate are: "<<_roti[i].arataInstant1()<<" ";
 if(_roti[i].GetTipAnvelopa()==1)
    std::cout<<" si cauciuc iarna"<<std::endl;
 else
    std::cout<<" si cauciuc vara"<<std::endl; break;
 case 4: std::cout<<"Roata stanga  spate are: "<<_roti[i].arataInstant1()<<" ";
 if(_roti[i].GetTipAnvelopa()==1)
    std::cout<<" si cauciuc iarna"<<std::endl;
 else
    std::cout<<" si cauciuc vara"<<std::endl; break;

    std::cout<<std::endl;
}
}
}
