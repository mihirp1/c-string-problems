#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char *strlwr(char *str)
{
  unsigned char *p = (unsigned char *)str;

  while (*p) {
     *p = tolower((unsigned char)*p);
      p++;
  }

  return str;
}




int main(int argc,char* argv[])


  {
  char s1[] = "MIHIR";
  char* s2 = strlwr(s1);


  printf("\nLowercase = %s\n",s2);  


  return 0;
  }
