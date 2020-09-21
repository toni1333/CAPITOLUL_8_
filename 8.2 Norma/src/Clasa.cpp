#include "Clasa.h"
#include<NormaProf.h>
#include<iostream>
using namespace std;

Clasa::Clasa()
{
    //ctor
}
Clasa::Clasa(unsigned short an,unsigned short orePeSapt, char litera):_an{an},_orePeSapt{orePeSapt},_litera{litera}
{
    // ctor cu 3 parametrii... initializat AN/ ORE/ LIT...
}

Clasa::~Clasa()
{
    //dtor
}
void Clasa::AfiseazaOre()
{
    cout<<"Clasa a-"<<_an<< _litera <<" are : "<< _orePeSapt << " ore pe saptamana. "<<endl;
}
