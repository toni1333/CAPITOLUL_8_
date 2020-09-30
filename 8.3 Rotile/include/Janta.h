#ifndef JANTA_H
#define JANTA_H

enum MatJanta {tabla=1, aluminiu};

class Janta
{
    public:
        Janta();
        Janta(unsigned int,MatJanta,float);
        virtual ~Janta();
        void SchimbaJanta(MatJanta,float);


    protected:

    private:
        unsigned int _nrPrezoane;
        MatJanta _matJanta;
        float _diametru;

};

#endif // JANTA_H
