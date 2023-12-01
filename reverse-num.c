#include <stdio.h>  
int main()  
{  
   long n;  
   int rev;
   int count=0;   
   printf("Enter any number");  
   scanf("%ld",&n);  
   while(n!=0)  
   {  
       rev=n%10; 
       printf("%d",rev);
       count++;
       n=n/10;
       //printf("\n n = %ld \t count = %d \t rev = %d \n",n,count,rev); 

   }  
     
   //printf("\nThe number of digits are: %d", rev);  
    return 0;  
}