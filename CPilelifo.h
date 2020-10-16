#ifndef CPILELIFO_H_INCLUDED
#define CPILELIFO_H_INCLUDED
#include "CBasePile.h"

#include <iostream>

class CPilelifo: public CBasePile {
public:
    CPilelifo();  //Declaration du constructeur et du destructeur
   ~CPilelifo();

    CPilelifo&   operator <(int i);  //surcharge de l'operateur <
    int operator >( int &i);   //surcharge de l'operateur >>
    void afficher(std::ostream &output) const;

private:

};
std::ostream &operator<<(std::ostream &operateur,CBasePile const &o);   //Surcharge du STD SRotie
#endif // CPILELIFO_H_INCLUDED
