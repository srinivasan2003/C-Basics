#include <stdio.h> 
#define max 1000 
int main()  
{ 

   int array[max],n; 

   printf("\n Enter the number of array : ");
   scanf("%d",&n);

   for(int i=0;i<n;i++){
        printf("Enter the Value : ");
        scanf("%d",&array[i]); 
   }

   for(int j=0;j<n;j++){
        printf(" %d \t",array[j]);
   }
    
   
   return 0;
}