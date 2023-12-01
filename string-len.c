#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char string[40];

    printf("\n\n Enter you input : ");
    
    
    gets(string);

    char word[20] = " @ Sathyabama"; 

    char c[20];


    printf("\nYour string len : %d \n\n",strlen(string));

    strcat(string,word);

     printf("%s \n ",string);

     printf("\n%d\n",strcmp(string,word));

     strcpy(c,word);

     printf("\n%s\n",c);


     printf("\n%d\n", sizeof(c));

    //  printf("\n%s\n", strupr(c));



    return 0;
}