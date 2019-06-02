#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char *strupr(char *str)
{
  unsigned char *p = (unsigned char *)str;

  while (*p) {
     *p = toupper((unsigned char)*p);
      p++;
  }

  return str;
}




int main(int argc,char* argv[])


  {
  char s1[] = "MIHIR";
  char* s2 = strupr(s1);


  printf("\nLowercase = %s\n",s2);  


  return 0;
  }
