#ifndef CPILEFIFO_H_INCLUDED
#define CPILEFIFO_H_INCLUDED
#include "CBasePile.h"
#include <iostream>
class CPilefifo: public CBasePile
{
public:
    CPilefifo () ;    //Declaration du constructeur et du destructeur
   ~CPilefifo ();

    CPilefifo&   operator <  (int i);     //surcharge de l'operateur <
    int operator > (int &i);              //surcharge de l'operateur >>
    void afficher(std::ostream &output) const;

private:


};

std::ostream &operator<<(std::ostream &operateur,CBasePile const &o);   //Surcharge du STD SRotie
#endif // CPILEFIFO_H_INCLUDED
