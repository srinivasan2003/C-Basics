#include <stdio.h> 
#define max 1000 
int main()  
{ 

   int array[max],n,array1[max],ele,num,arr; 

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

   printf("array 1 : ");
   for(int j=0;j<n;j++){
        printf("%d \t",array1[j]);
   }
   printf("\n\n");

   printf("Enter the array to search : ");

   scanf("%d",&arr);

   printf("\n\nEnter the index value of the element : ");

   scanf("%d",&ele);

   if(arr == 1){
      printf("\n\n Element : %d \n\n",array[ele]);

   }else if(arr == 2){
      printf("\n\n Element : %d \n\n",array1[ele]);
   }

   return 0;
}