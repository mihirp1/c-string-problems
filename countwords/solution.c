#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

char* tl(char* in)


   {
     unsigned char* p = (unsigned char*) in;

         while(*p)
         {
           
            (*p) = tolower(*p);
            p++;
         }
 

     return in;
   }

char* tu(char* in)


   {
     unsigned char* p = (unsigned char*) in;

         while(*p)
         {

            (*p) = toupper(*p);
            p++;
         }


     return in;
   }




int main(int argc, char* argv[])


   {
   unsigned char* temp;

   int words=0;

   char s1[] = "ThIs IM is mE!!123456 Right         HERE!!!     Okay?";

   printf("\nOriginal String : %s\n",s1);
   int i=0;
   while (*(s1+i) != '\0')

       {
         printf("\n i = %d\n",i);
         if((int)*(s1+i) == (int)(' ') && (int)*(s1+i+1) != (int)(' '))
         {
         words++; 
        
         }

       //printf("%c",*(s1+i));
       i++;

       }


     printf("\nFinal word count  : %d\n",words+1);


   return 0;


   }
