#include "CBasePile.h"
#include <iostream>
CBasePile::CBasePile(int Max)
{    mSommet=0;
     nMax=Max;
     mPile = new int[nMax];

}


CBasePile::~CBasePile()
{
   delete[] mPile;
}

CBasePile& CBasePile::operator<(int val)
{


}


int CBasePile::operator>(int &i)
{


}

void CBasePile::afficher(std::ostream &output) const
{

}

