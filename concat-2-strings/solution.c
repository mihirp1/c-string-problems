#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char* argv[])



     {

     char* s1 = "Mihir Phatak";

     char* s11 = (char*) malloc(100*sizeof(char));     

     char s2[100] = "Phatak";

     strcat(s11,s1);
     strcat(s11,s2);

     printf("\nValue of s1 is = %s\n",s11);

     


     return 0;
     }

