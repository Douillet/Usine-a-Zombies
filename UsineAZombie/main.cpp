
#include "Zombie.h"


int main()
{
   Zombie proto1;
   Zombie proto2("Richard", 60, 3);
   Zombie proto45("BrBRABREUH", 85, 8);
   Zombie proto69("Aeugh", 120, 4);
   Zombie proto75("Rene", 78, -3);
   cout<< proto2.getNom()<<endl;
   cout<< proto45.getAttack()<<endl;
   //cin >> proto69.getPv();
   cout<< proto69.getPv()<<endl;
   cout<< proto75.getAttack()<<endl;
   cout<< proto1.showInfos()<<endl;

   return 0;
}
