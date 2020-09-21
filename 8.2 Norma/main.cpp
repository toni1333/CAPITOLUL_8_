#include <iostream>
#include<Clasa.h>
#include<NormaProf.h>

using namespace std;

int main()
{
    Clasa oClasa{11,4,'C'};         // asa am declarat constr-ul in Clasa.h  an/ ore/ litera....
    Clasa altaClasa{5,5,'B'};
    Clasa ultimaClasa{9,3,'A'};

    NormaProf ludu{oClasa,altaClasa,ultimaClasa,sport};
    ludu.AfiseazaOre();
    cout<<"Total ore: "<<ludu.CalculeazaTotalOre()<<endl;
    NormaProf *mutu=new NormaProf;
    mutu=&ludu;
    mutu->AfiseazaOre();
    cout<<"Total ore: "<<(*mutu).CalculeazaTotalOre()<<endl;  // ca sa nu uit si varianta 2 de a accesa prin pointer...  :)

    mutu->AfisMat(); // suplimentar prin pointer am afisat materia aleasa in constr cu 4 parametrii...

    delete mutu;  // marcam pointerul pe delete si il resetam...
    mutu=nullptr;

    return 0;
}
