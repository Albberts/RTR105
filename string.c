#include <stdio.h>
#include <string.h>

int count_letters(char *s);

int main(void)
{
  char c[] = "abcd";
  printf("rindas garums baitos: %ld\n",sizeof(c));
  printf("rindas garums elementos: %ld\n",sizeof(c)/sizeof(char));
  printf("rindas garums pirms izmaiņām: %lu\n",strlen(c));
  c[0] = '0';
  printf("rinda pirms izmaiņām: %s\n",c)

  //strncpy(c,"efghig");
  strcpy(c,"efghig",strlen(c))

  printf("rindas garums pēc izmaiņām: %lu\n",strlen(c));
  printf("rinda pirms izmaiņām: %s\n",c);

  char cc[50] = "abcd";

  printf("rindas garums baitos: %ld\n",sizeof(cc));
  printf("rindas garums elementos: %ld\n",sizeof(cc)/sizeof(char));
  printf("rindas garums pirms izmaiņām: %lu\n",strlen(cc));
  printf("rinda pirms izmaiņām: %s\n",cc);



   return 0;
}
