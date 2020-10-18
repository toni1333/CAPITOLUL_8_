#ifndef MENTOR_H
#define MENTOR_H
#include<Persoana.h>

class Mentor: public Persoana
{
    public:
        S mm={"Mentor: "};
        S pp={" preda "};
        Mentor(S, S, S);
        Mentor();
        virtual ~Mentor();
        S GetNumeComplet(){return (mm+Persoana::GetNumeComplet());}
        S Activitate(){ return (pp+Persoana::Activitate());}
        void SchimbaMaterie(S modificaM){setMaterie(modificaM);}
        void SchimbaMentor(S prenumeNOU,S numeNOU){setPrenume(prenumeNOU);setNume(numeNOU);}
    protected:
    private:
};

#endif // MENTOR_H
