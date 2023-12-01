#include <stdio.h> 
#define max 1000 
int main()  
{ 

   int array[max],array2[max],n; 

   printf("\n Enter the number of array : ");
   scanf("%d",&n);

   for(int i=0;i<n;i++){
        printf("Enter the Value array 1: ");
        scanf("%d",&array[i]); 
   }

   printf("\n\n");

//    for(int j=0;j<n;j++){
//          printf("Enter the Value for array 2: ");
//         scanf("%d",&array2[j]); 
//    }

   for (int k = 0; k < n; k++)
   {
        for (int q = 0; q < k; q++)
            if(array[k]==array[q]){
                printf("\n %d is the duplicate \n",array[k]);
            }else{
                continue;
            }
   }
   

   
    
   
   return 0;
}