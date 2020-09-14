#include <iostream>
#include "Cerc.h"
#include "Cilindru.h"


using namespace std;

int main()
{
    Cilindru chilly{2,5};
    cout<<"Volumul lui chilly este... "<<chilly.Volum()<<"\n";
    cout<<"Aria lui chilly este... "<<chilly.ArieCilindru()<<"\n";
    Cilindru *hipster[2];
    hipster[0]=new Cilindru{2,5};
    hipster[1]=new Cilindru{5,2};



    cout<<"Volumul lui hipster 0... "<<hipster[0]->Volum()<<"\n";
    cout<<" Aria lui hipster 0... "<<hipster[0]->ArieCilindru()<<"\n";
    cout<<"Volumul lui hipster 1... "<<hipster[1]->Volum()<<"\n";
    cout<<" Aria lui hipster 1... "<<hipster[1]->ArieCilindru()<<"\n";

    delete [] hipster;

    return 0;
}
