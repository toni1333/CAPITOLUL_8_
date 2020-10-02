#ifndef MASINA_H
#define MASINA_H
#include<Roata.h>


class Masina
{
    public:
        Masina(Roata, Roata, Roata, Roata);
        virtual ~Masina();
        void AfiseazaStareRoti(std::string);
        void UmflaRoti(double presiune);
        void UmflaRoata(short, float);
        void SchimbaRoti(Roata, Roata, Roata, Roata);
        void SchimbaRoata(short, Roata);
        void AfiseazaTipCauciucuri(std::string);
        float afiseazaInstant();  // functie suplimentara


    protected:

    private:
       short _VerificaRoti();
       Roata _roti[4];
};

#endif // MASINA_H
