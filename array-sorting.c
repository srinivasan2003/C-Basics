#include <stdio.h> 
#define max 1000 
int main()  
{ 

   int array[max],array2[max],array3[max],n,minv,maxv,count,pos,pre; 

   printf("\n Enter the number of array : ");
   scanf("%d",&n);

   for(int i=0;i<n;i++){
        printf("Enter the Value : ");
        scanf("%d",&array[i]); 
   }

   

   for(int j=0;j<n;j++){
        printf(" %d \t",array[j]);
   }

printf("\n");

   


    printf("\n\n");

printf("Assending : ");

pre = 0;
    for(int i = 0;i<=n-1;i++){
       
       for(int j = 0;j<=n-1;j++)
           if(array[j] > array[i]){
                pre = array[i];
                array[i] = array[j];
                array[j] = pre;
           }
    }

for(int j=0;j<n;j++){
        printf(" %d \t",array[j]);
}

pre = 0;
    for(int i = 0;i<=n-1;i++){
       
       for(int j = 0;j<=n-1;j++)
           if(array[j] < array[i]){
                pre = array[i];
                array[i] = array[j];
                array[j] = pre;
           }
    }

printf("\n\n");
printf("Desending : ");
for(int j=0;j<n;j++){
        printf(" %d \t",array[j]);
}
printf("\n\n");
   return 0;
}