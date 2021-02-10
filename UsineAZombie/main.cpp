
#include "Zombie.h"
#include "Bomber.h"

int main()
{
   Zombie proto1;
   Zombie proto2("Richard", 60, 3);
   Zombie proto45("BrBRABREUH", 85, 8);
   Zombie proto69("Aeugh", 120, 4);
   Zombie proto75("Rene", 78, -3);
   Zombie protoCrashTest("Rater", 5, 1);

   Bomber b;//("Boom", 60, 8);

   cout<< protoCrashTest.getPv()<<endl;
   proto1.attaqueMaladroite(&protoCrashTest);
   cout<< protoCrashTest.getPv()<<endl<<endl;

   cout<< proto2.getNom()<<endl;
   cout<< proto45.getAttack()<<endl;
   //cin >> proto69.getPv();
   cout<< proto69.getPv()<<endl;
   cout<< proto75.getAttack()<<endl;

   proto1.showInfos();




   cout<<endl;
   return 0;
}
