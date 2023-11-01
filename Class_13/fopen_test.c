// https://cplusplus.com/reference/cstdio/fopen/
#include <stdio.h>
int main ()
{

  FILE * pFile;
  // uzdevumms - faila nosaukuma un atrašanas vietas noskaidrošana no lietotāja

  // pfile = open ("/myfile.txt","w");
  pFile = fopen ("myfile.txt","w");
  if (pFile!=NULL)
  {
    printf ("norāde uz failu - %p\n",pFile);

    fputs ("fopen - testa ierkasts failā\n",pFile);
    fscanf("%c","&c");
    fclose (pFile);
  }
  else
  {
    fputs("fopen - failu nav izdevies atvērt\n",stderr);
  }
  return 0;
}
