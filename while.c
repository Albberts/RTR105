#include <stdio.h>
#define N 10 

int main(void)
 {
 int i = 0
 //int N;  // NB! nedrīkst!
 //N = 20; // NB! nedrīkst!
 int i = 0;
 printf("i mainīgā sākuma vērtība: %d\n",i);

 i = i + 1;
 while(i<=N) // NB! 10 <= 10 rezultāts ir 1 (dec)
   {
   printf("(%d.) i mainīgā nākamā vērtība - %d (un tā ir mazāka part %d)\n",i,i,N);
   i = i + 1; // NB! obligāti jāmaina i vērtība, savādāk, dabūsim "bezgalīgu" ciklu!


return 0;
}
