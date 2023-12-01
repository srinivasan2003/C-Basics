#include <stdio.h>

int main(){

    int n;

    printf("Enter the nummber : ");
    scanf("%d",&n);
    func(n);

    //cude(n);


    return 0;

}

void func(int num){
    int sum = 0;
    for(int i =1;i<=num;i++){
        //printf("%d\t",i);
        
        sum +=i*i*i;
        printf("%d\t",sum);   
    }

    //rintf("\n\n Cube : %d \n\n",sum);
}

void cude(int num){
    num = num*num*num;
    printf("%d\n",num);
}