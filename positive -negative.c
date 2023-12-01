#include <stdio.h>

int main(){

    int a;

    printf("Enter the number : ");
    scanf("%d",&a);

    if(a == 0 ){
        printf("\nThe number is 0\n");
    }else if (a > 0){
        printf("\nNumber is positive .\n");

    }else{
        printf("\nThe Number is Negative .\n");
    }
    return 0;

}
