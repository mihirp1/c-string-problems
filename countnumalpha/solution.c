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

   int num=0;
   int alpha=0;
   int special=0;

   char s1[] = "ThIs IM is mE!!123456";

   printf("\nOriginal String : %s\n",s1);
   int i=0;
   while (*(s1+i) != '\0')

       {
         printf("\n i = %d\n",i);
         if((int)*(s1+i) >= (int)('A') && (int)*(s1+i) <= (int)('Z'))
         {

         temp = (s1+i);
         temp = tl((s1+i));      
         printf("\n*(s1+i) = %c\n",*(s1+i));
         alpha++;

         }

         else if((int)*(s1+i) >= (int)('a') && (int)*(s1+i) <= (int)('z'))
         {


         temp = (s1+i);
         temp = tu((s1+i)); 
         printf("\n*(s1+i) = %c\n",*(s1+i));
         alpha++;
         }  


         else if((int)*(s1+i) >= (int)('0') && (int)*(s1+i) <= (int)('9'))
         {
    
         num++; 

         } 



         else
         {

         special++; 

         } 



     


       //printf("%c",*(s1+i));
       i++;

       }


     printf("\nFinal string count num, alpha & special chars : %d %d %d\n",num,alpha,special);


   return 0;


   }
