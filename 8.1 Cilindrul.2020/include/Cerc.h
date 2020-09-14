#ifndef CERC_H
#define CERC_H

const double pi=3.14;     // ca sa-l vedem pe "pi" peste tot...

class Cerc
{
    public:
        Cerc(double);
        double Arie();
        double get_raza();
        virtual ~Cerc();

    protected:

    private:
       double _raza;
};

#endif // CERC_H
