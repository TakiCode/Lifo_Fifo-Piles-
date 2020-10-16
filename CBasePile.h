#ifndef CBASEPILE_H_INCLUDED
#define CBASEPILE_H_INCLUDED
#include <iostream>



class CBasePile
{
public:

    CBasePile (int =50) ;
    virtual ~CBasePile ();

    virtual CBasePile&   operator <(int i);
    virtual  int operator > (int &i);               //Declaration des structures communes entre LIFO et FIFO
    virtual void afficher(std::ostream &output) const;
    protected:
        int nMax;
        int mSommet;
        int *mPile;

};
//std::ostream& operator<<(std ::ostream &o, const CBasePile &p);
#endif // CBASEPILE_H_INCLUDED
