#include <stdio.h>

int main(){

    int n,num1=0,num2=1,res;

    printf("\n Enter the number : ");
    scanf("%d",&n);

    printf("\n\n The series is : \n\n \t%d\t%d",num1,num2);
    res = num1+num2;


    for (int i = 3; i <= n; i++)
    {
        printf("\t%d",res);
        num1=num2;
        num2=res;
        res = num1+num2;
    }
    
/*

    while(res<=n){
        printf("\t%d",res);
        num1=num2;
        num2=res;
        res = num1+num2;
    }
    */
    return 0;

}
