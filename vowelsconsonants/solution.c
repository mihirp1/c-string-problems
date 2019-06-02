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

   int vowel=0;
   int con=0;

   char s1[] = "ThIs IM is mE!!123456";

   printf("\nOriginal String : %s\n",s1);
   int i=0;
   while (*(s1+i) != '\0')

       {
         printf("\n i = %d\n",i);
         if((*(s1+i) >= ('A') && *(s1+i) <= ('Z')) || (*(s1+i) >= ('a') && *(s1+i) <= ('z')))
         {

                   if(*(s1+i) == ('A') || *(s1+i) == ('E') || *(s1+i) == ('I') || *(s1+i) == ('O') || *(s1+i) == ('U') || *(s1+i) == ('a') || *(s1+i) == ('e') || *(s1+i) == ('i') || *(s1+i) == ('o') || *(s1+i) == ('u'))
                   {
         
                      vowel++;

                   }

                   else
                   {
                      con++; 

                   }

         }


       i++;

       }

     printf("\nFinal string count vowels,cons : %d %d\n",vowel,con);

   return 0;


   }
