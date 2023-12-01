#include <stdio.h>

int main(){
    int n;
    
    printf("\n\n \t\t\t\tMenu\t\t\t\t \n\n");

    printf("\t\t Product No \t Product Name \t\t    Price \t\t \n\n");

    printf("\t\t 1 \t\t Keyboard \t\t Rs.1000/- \t\t \n\n");

    printf("\t\t 2 \t\t Mouse \t\t\t Rs.1000/- \t\t \n\n");

    printf("\t\t 3 \t\t Monitor \t\t Rs.15000/- \t\t \n\n");

    printf("\t\t 4 \t\t Server \t\t Rs.2000/- \t\t \n\n");

    printf("\n\n Enter the number of items : ");

    scanf("%d",&n);

    f(n);

    return 0;

}

void func(int num){
    int i = 1,quant,temp=0,t,price;
    char item[40];

    
    while(i<num){
        for (int j = 1; j <= num; j++)
        {
            printf("\n\n Item %d : ",j);
            scanf("%s",&item);
            printf(" Quantity : ");
            scanf("%d",&quant);
            printf(" Price : ");
            scanf("%d",&price);
            t = quant*price;
            printf("\t Total Price : Rs %d /-",t);
            temp = temp + t ;
            

        }
            
        
         
        

        i++;  

        break;     
    }
    

    
    printf("\nSub Total : %d \n\n",temp);

}


void f(int num){
    char *arr[] = {"Keyboard", "Mouse", "Monitor","Server"};
    int pno[] = {1000, 1000, 15000,20000};
    int item_no,quant,t,temp=0,p;
    printf("\nPlease Place your Order :\n");
    for(int i = 1;i<=num;i++){
        printf("\nitem %d : \n",i);
        printf("\nProduct No : ");
        scanf("%d",&item_no);
        p = item_no-1;
        printf(" \nThe Product is : %s \nThe Price is  : %d \nEnter The Quantity : ",arr[p],pno[p]);
        scanf("%d",&quant);
        t=pno[p]*quant;

        printf("\nPrice : %d\n",t);

        temp = temp + t;

    }

    printf("\nSub Total : %d \n\n",temp);

    int tax = 0.18*temp;

    int tt = temp + tax;

    printf("With Tax : %d \n\n",tt);
    
    int dis;

    if(tt >= 100000 && tt <= 200000){
        dis = 0.05 * tt;

        tt = tt - dis;
        printf("\nDiscounted Price : %d \n",tt);
    }else if(tt >= 200000){
        dis = 0.10 * tt;

        tt = tt - dis;
        printf("\nDiscounted Price : %d \n",tt);
    }
}