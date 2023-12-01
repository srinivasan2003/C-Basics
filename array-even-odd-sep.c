#include <stdio.h> 
#define max 1000 
int main()  
{ 

   int array[max],n,even[max],odd[max],count1,count2; 

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

count1=count2=0;

   for(int i = 0;i<=n-1;i++){
     

     if(array[i] % 2 == 0){
        even[count1] = array[i];
        count1++;
     }else{
        
        odd[count2] = array[i];
        count2++;
     }


      
      
   }

printf("\n\nEven :");
for (int i = 0; i < count1; i++)
{
    printf(" %d \t ",even[i]);
}
printf("\n\nodd :");
for (int i = 0; i < count2; i++)
{
    printf(" %d \t ",odd[i]);
}


   return 0;

}