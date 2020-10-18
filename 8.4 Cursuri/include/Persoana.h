#ifndef PERSOANA_H
#define PERSOANA_H
#include<iostream>

typedef std::string S;      //  avem un typedef string
typedef double D;           //  al 2 lea typedef la double

class Persoana
{
    public:
        S cc={"cursul "};
        Persoana(S, S, S);
        Persoana();
        virtual ~Persoana();
        S Activitate(){return cc;}
        S getMaterie(){return _materie;}
        S getPrenume(){return _prenume;}
    protected:
        S GetNumeComplet(){return (_prenume+_nume);}
        void setPrenume(S prenumeX){_prenume=prenumeX;}
        void setNume(S numeX){_nume=numeX;}
        void setMaterie(S materieX){_materie=materieX;}
    private:
        S _prenume;
        S _nume;
        S _materie;

};

#endif // PERSOANA_H
