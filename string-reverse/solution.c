#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>


int main(int argc, char* argv[])


   {


   char s1[] = "ThIs IM is mE Okay?";
   int len = strlen(s1);
   char* s2 = (char*) malloc(sizeof(char) * (len));
  
   printf("\nOriginal String :%s\n",s1);
   printf("\nOriginal String Length:%d\n",len);
   int i=0;

   strcpy(s2,s1); 
   while (s1[i] != '\0')

       {
       s2[i] = s1[len-i-1];

       printf("\nChars = %c and Reversed Chars = %c\n",s1[i],s2[i]);
       i++;

       }
     //s2[len] = '\0';

     printf("\nReversed String  : %s\n",s2);


   return 0;


   }
