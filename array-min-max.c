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

   for(int i = 0;i<=n-1;i++){
      if(minv > array[i]){
        minv = array[i];
      }else if (maxv < array[i]){
        maxv = array[i];
      }
      
      
   }

printf("\n\n min : %d \t max : %d \t",minv,maxv);

   

   
   return 0;
}