#include "CBasePile.h"
#include "CPilefifo.h"
#include <iostream>

CPilefifo::CPilefifo():CBasePile()
{

}

CPilefifo::~CPilefifo()
{

}

CPilefifo&  CPilefifo::operator < (int i)
{
     mPile[mSommet++]=i;
     return *this;
}

int CPilefifo::operator > (int &i)
{
    i = mPile[0];
    for(int k = 1 ; k < mSommet ; k++)
        mPile[k-1] =  mPile[k];

    mSommet--;
    return i;
 }

 void CPilefifo::afficher(std::ostream &output) const
{
    output << "pile = ";
     for(int i = 0 ; i < mSommet ; i++)
     {
         output << mPile[i] << " " ;
     }
}


 std::ostream& operator<<(std::ostream &operateur,CBasePile const &o)
{
    o.afficher(operateur);
    return operateur;
}
