#include <stdio.h>

int main(){

    int n;

    printf("Enter the nummber : ");
    scanf("%d",&n);
    mul(n);

    //cude(n);


    return 0;

}

void mul(int num){
    for(int i =1;i<=10;i++){
        printf("\n %d * %d = %d \n",num,i,num*i);
    }
}