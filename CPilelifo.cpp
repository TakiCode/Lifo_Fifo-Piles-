#include "CBasePile.h"
#include "CPilelifo.h"
#include <iostream>
CPilelifo::CPilelifo():CBasePile()
{

}
CPilelifo::~CPilelifo()
{

}

CPilelifo&   CPilelifo::operator < (int i)
{
     mPile[mSommet++]=i;
    return *this;
}
int CPilelifo::operator > (int &i)
{i=mPile[--mSommet];
    return i;

}
void CPilelifo::afficher(std::ostream &output) const
{
    output << "pile = ";
     for(int i = 0 ; i < mSommet ; i++)
     {
         output << mPile[i] << " " ;
     }
}

