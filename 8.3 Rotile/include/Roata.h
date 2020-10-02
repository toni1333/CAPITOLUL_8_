#ifndef ROATA_H
#define ROATA_H
#include "Anvelopa.h"



class Roata
{
    public:
        Roata(Anvelopa, Janta);
        virtual ~Roata();
        bool IsFlat();
        void SchimbaRoata(Anvelopa, Janta);
        void UmflaRoata(double presiune);
        TipAnvelopa GetTipAnvelopa();
        float arataInstant1();   //  functie suplimentara secundara
    protected:

    private:
        Anvelopa _anvelopa;
        Janta _janta;
};

#endif // ROATA_H
