#ifndef CILINDRU_H
#define CILINDRU_H
#include "Cerc.h"                // am inclus fisierul header Cerc aici


class Cilindru
{
    public:
        Cilindru(double, double);
        double Volum();
        double ArieCilindru();
        virtual ~Cilindru();

    protected:

    private:
        Cerc _baza;
        double _inaltime;
};

#endif // CILINDRU_H
