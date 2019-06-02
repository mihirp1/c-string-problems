#include<stdio.h>
#include<stdlib.h>

char* tl(char* in)

   {
     unsigned char *p = (unsigned char*)in;

         while(*p)
         {

          *p = tolower((unsigned char)*p); 
          p++;
         } 
  
   return in;
   }
   



int main(int argc,char* argv[])


   {

        char s1[] = "FOR";
        char* s2 = tl(s1);
        
        printf("\nSmall = %s\n",s2);

        return 0;
    }
