#ifndef PANTALONE_H
#define PANTALONE_H

#include <Vestito.h>


class Pantalone : public Vestito
{
    public:
        Pantalone();
        Pantalone(string n, string t, string c, float p, bool f): Vestito(n,t,c,p), fallato(f) {};
        bool isFallato() { return fallato; }
        void setFallato(bool f) {fallato=f;}
        float calcolaPrezzo(Cliente c) {if (fallato)
                                    return getPrezzo()*0.7;
                                else
                                    return getPrezzo();}
        virtual ~Pantalone();

    private:
        bool fallato;
};

#endif // PANTALONE_H
