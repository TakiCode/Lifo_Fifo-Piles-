#include <iostream>
#include "CBasePile.h"
#include "CPileFifo.h"
#include "CPileLifo.h"

using namespace std;


int main()
{

CBasePile* ptPile ;
CPilefifo fifo ; // pile First In First Out
CPilelifo lifo ; // pile Last In First Out
ptPile = &fifo; // ptPile pointe vers la pile FIFO
*ptPile < 0 < 1; // on empile 0 puis 1
cout << "pile=" << *ptPile<<endl ; // à l’écran : pile=0 1
int i;
*ptPile > i ; // dépile dans i
cout << "pile=" << *ptPile << "i=" << i<<endl ; // à l’écran : pile=1 i=0
ptPile = &lifo ; // ptPile pointe vers la pile LIFO
*ptPile < 0 < 1 ; // on empile 0 puis 1
cout << "pile=" << *ptPile<<endl ; // à l’écran : pile=0 1
*ptPile > i ; // dépile dans i
cout << "pile=" << *ptPile << " i=" << i<<endl ; // à l’écran : pile=0 i=1


}

