#include "NormaProf.h"
#include<Clasa.h>
#include<iostream>
using namespace std;

NormaProf::NormaProf()
{
    //ctor
}
NormaProf::NormaProf(Clasa cls1,Clasa cls2,Clasa cls3,Materie mat): _clasa1{cls1},_clasa2{cls2},_clasa3{cls3},_materie{mat}
{
    // ctor cu 4 parametrii...
}
NormaProf::~NormaProf()
{
    //dtor
}
void NormaProf::AfiseazaOre(){
    cout<<"Orarul este:"<<endl;
    _clasa1.AfiseazaOre();
    _clasa2.AfiseazaOre();
    _clasa3.AfiseazaOre();

}
unsigned short NormaProf::CalculeazaTotalOre(){
    return  (_clasa1.get_orePeSapt()+_clasa2.get_orePeSapt()+_clasa3.get_orePeSapt());
}
void NormaProf::AfisMat(){          //  functie suplimentara....
  cout<<endl<<endl;
  cout<<"Materia selectata in constructorul cu 4 parametri este: ";
            switch (_materie){
    case 1: cout<<"fizica"<<endl; break;
    case 2: cout<<"matematica"<<endl; break;
    case 3: cout<<"chimie"<<endl; break;
    case 4: cout<<"romana"<<endl; break;
    case 5: cout<<"sport"<<endl; break;}

        }
