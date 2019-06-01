#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char* argv[])

    {
    char* s1 = "Here I am!!"; 


    //Method 1
    int len = strlen(s1);

    printf("\n Size of string : - %d\n",len);
    int i=0 ;
     int count = 0;

    //Method 2 

    while(*(s1+i) != '\0')

         {
         i++;
         count++;


         }

    printf("\n Size of string : - %d\n",count);


    return 0;
    }
