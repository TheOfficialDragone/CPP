#ifndef CAMICIA_H
#define CAMICIA_H

#include <Vestito.h>


class Camicia : public Vestito
{
    public:
        Camicia();
        Camicia(string n, string t, string c, float p, bool s): Vestito(n,t,c,p), saldo(s) {};
        bool inSaldo() { return saldo; }
        void setSaldo(bool s) {saldo=s;}
        float calcolaPrezzo(Cliente c) {if (saldo)
                                    return getPrezzo()*0.85;
                                else
                                    return getPrezzo();}

        virtual ~Camicia();

    private:
        bool saldo;
};

#endif // CAMICIA_H
