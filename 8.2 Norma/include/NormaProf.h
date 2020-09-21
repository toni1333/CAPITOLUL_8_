#ifndef NORMAPROF_H
#define NORMAPROF_H
#include<Clasa.h>

enum Materie {fizica=1,matematica,chimie,romana,sport};

class NormaProf
{
    public:
        NormaProf();
        NormaProf(Clasa,Clasa,Clasa,Materie);
        virtual ~NormaProf();
        void AfiseazaOre();
        unsigned short CalculeazaTotalOre();
        void AfisMat();           //  suplimentar
    protected:
    private:
       Materie _materie;
       Clasa _clasa1;
       Clasa _clasa2;
       Clasa _clasa3;

};

#endif // NORMAPROF_H
