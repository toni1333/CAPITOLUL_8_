#ifndef ANVELOPA_H
#define ANVELOPA_H
#include "Janta.h"
#include<string>

enum TipAnvelopa {iarna=1,vara, universal};

class Anvelopa
{
    public:
        Anvelopa();
        Anvelopa(std::string , float, TipAnvelopa);
        virtual ~Anvelopa();
        float getPresiune(){return _presiune;};
        TipAnvelopa getTipAnvelopa(){return _tipAnvelopa;};
        void UmflaAnvelopa(float bagaAer);

    protected:

    private:
        std::string _brand;
        float _presiune;        // aproximativ 5 atm deci folosim cifre mici de aceea float...
        TipAnvelopa _tipAnvelopa;
};

#endif // ANVELOPA_H
