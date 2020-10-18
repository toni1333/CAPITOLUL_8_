#ifndef CURSANT_H
#define CURSANT_H
#include<Persoana.h>

class Cursant: public Persoana
{
    public:
        S cc={"Cursant: "};
        S ss={" studiaza "};
        Cursant(S, S, S);
        Cursant();
        virtual ~Cursant();
        S GetNumeComplet(){return (cc+Persoana::GetNumeComplet());}
        S Activitate(){return (ss+Persoana::Activitate());}
        void setnotaTeme(D notaX){_notaTeme=notaX;}
        void setnotaTeste(D notaY){_notaTeste=notaY;}
        void setnotaProiect(D notaZ){_notaProiect=notaZ;}
        S Absolva();
    protected:
    private:
        D _notaTeme;
        D _notaTeste;
        D _notaProiect;
        bool HasGrades();
        bool IsAverageOk();
};

#endif // CURSANT_H
