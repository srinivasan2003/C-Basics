#include <stdio.h> 
#define max 1000 
int main()  
{ 

   int array[max],n,array1[max],array2[max],num; 

   printf("\n Enter the number of array : ");
   scanf("%d",&n);

   for(int i=0;i<n;i++){
        printf("Enter the Value : ");
        scanf("%d",&array[i]); 
   }

      for(int j=0;j<n;j++){
         printf("Enter the Value for array 2: ");
        scanf("%d",&array1[j]); 
   }

   printf("array : ");
   for(int j=0;j<n;j++){
        printf("%d \t",array[j]);
   }

   printf("\n\n\n");

   printf("array 1 :");

   for(int j=0;j<n;j++){
        printf("%d \t",array1[j]);
   }


   for(int i = 0;i<n;i++){
        array2[i]=array[i];
   }

   num = n + n;

   for(int i = 0;i<num-1 ;i++){
        array2[i+n]=array1[i];
   }

   printf("\n\n");

   printf("\n Array 3 : ");

   for (int i = 0; i < num ; i++)
   {
        printf("%d \t",array2[i]);
   }

   printf("\n\n");
   

   

   

    
   
   return 0;
}