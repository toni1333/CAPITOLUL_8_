#include <iostream>
#include<Cursant.h>
#include<Mentor.h>

using namespace std;

int main()
{
    Mentor theBest{"Dumb"," Dude","Spalarea aerului"};
    cout<<theBest.GetNumeComplet()<<endl;
    cout<<theBest.getPrenume();
    cout<<theBest.Activitate();
    cout<<theBest.getMaterie()<<endl;
    Cursant chuck{"Chuck"," Norris","Spalarea aerului"};
    cout<<chuck.GetNumeComplet()<<endl;
    cout<<chuck.getPrenume();
    cout<<chuck.Activitate();
    cout<<chuck.getMaterie()<<endl;
    cout<<chuck.getPrenume();
    cout<<chuck.Absolva()<<endl;
    chuck.setnotaTeme(6);
    chuck.setnotaTeste(7);
    chuck.setnotaProiect(6);
    cout<<chuck.getPrenume();
    cout<<chuck.Absolva()<<endl;
    theBest.SchimbaMentor("Dumber"," Dude");
    theBest.SchimbaMaterie("Numaratul oilor");
    cout<<theBest.GetNumeComplet()<<endl;
    cout<<theBest.getPrenume();
    cout<<theBest.Activitate();
    cout<<theBest.getMaterie()<<endl;
    Cursant obiWan{"Obi Wan ","Kenobi","Numaratul oilor"};
    cout<<obiWan.GetNumeComplet()<<endl;
    cout<<obiWan.getPrenume();
    cout<<obiWan.Activitate();
    cout<<obiWan.getMaterie()<<endl;
    cout<<obiWan.getPrenume();
    cout<<obiWan.Absolva()<<endl;
    obiWan.setnotaTeme(10);
    obiWan.setnotaTeste(10);
    obiWan.setnotaProiect(10);
    cout<<obiWan.getPrenume();
    cout<<obiWan.Absolva()<<endl;


    return 0;
}
