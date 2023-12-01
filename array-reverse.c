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
//   for(int i=n-1;i>=0;i--){
//         printf("The Reversed Values are : ");
//         printf("%d \n",array[i]); 
//    }
   int j = n - 1;
   while (j >= 0)
   {
    
    printf("%d \t",array[j]);

   j--;

   }
   
    
   
   return 0;
}