#ifndef CLASA_H
#define CLASA_H


class Clasa
{
    public:
        Clasa();
        Clasa(unsigned short,unsigned short,char);
        virtual ~Clasa();
        void AfiseazaOre();
        void set_orePeSapt(unsigned short paramset){_orePeSapt=paramset;}; // declarati si initializati set si get...
        unsigned short get_orePeSapt(){return _orePeSapt;};

    protected:

    private:
       unsigned short _an=0;
       char _litera;
       unsigned short _orePeSapt;
};

#endif // CLASA_H
