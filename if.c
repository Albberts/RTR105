#include <stdio.h>
#define N 10

int main(void)
 {
 //int N;  // NB! nedrīkst!
 //N = 20; // NB! nedrīkst!

 int i = 0;
 printf("i mainīgā sākuma vērtība: %d\n",i);

 //
 i = i + 1; // te ir DIVAS operācija - piešķiršana un saskaitīšana
            // saskaitīšanai ir lielākā prioritāte => tā tiks
            // izpildīta pirmā un tad + operācijas tiks ievietots
            // atmiņā (vietā, uz kuru norāda identifikators pa kreisi)
 
if(i<=N)
  {
  printf("i mainīgā nākamā vērtība - %d (un tā ir mazāk par %d)\n",i,N);
  }
else
  {
  printf("i mainīgā nākamā vērtība ir kļuvusi lielāka par %d)\n",N);
  printf("Viss, skaitīšanu apturam!\n");
  return 0;
  }

return 0;
}
