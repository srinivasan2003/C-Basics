#include <stdio.h>  
int main()  
{  
   long n;  
   int rev;
   int count=0;   
   printf("Enter any number : ");  
   scanf("%ld",&n);  
   while(n!=0)  
   {  
        
       n=n/10;
       count++;
       
       //printf("\n n = %ld \t count = %d \t rev = %d \n",n,count,rev); 

   }  
     
    printf("\nThe number of digits are: %d \n", count);  
    return 0;  
}