#include <stdio.h> 
#define max 1000 
int main()  
{ 

   int array[max],n,minv,maxv; 

   printf("\n Enter the number of array : ");
   scanf("%d",&n);

   for(int i=0;i<n;i++){
        printf("Enter the Value : ");
        scanf("%d",&array[i]); 
   }

   minv=maxv=array[0];

   for(int j=0;j<n;j++){
        printf(" %d \t",array[j]);
   }

printf("\n");

   for(int i = 0;i<=n-1;i++){
     

     if(array[i] % 2 == 0){
        printf("\n %d is the Even Number \n",array[i]);
     }else{
        printf("\n %d is the Odd Number \n",array[i]);
     }
      
      
   }


   
printf("\n");
   
   return 0;
}