#ifndef GONNA_H
#define GONNA_H

#include <Vestito.h>


class Gonna : public Vestito
{
    public:
        Gonna();
        Gonna(string n, string t, string c, float p, float s): Vestito(n,t,c,p), sconto(s) {};
        float getSconto() { return sconto; }
        void setSconto(float s) {sconto=s;}
        float calcolaPrezzo(Cliente c)
                            {if (c.getSesso()=='F' || c.getSesso()=='f')
                                    return getPrezzo()-sconto;
                                else
                                    return getPrezzo();}

        virtual ~Gonna();

    private:
        float sconto;
};

#endif // GONNA_H
