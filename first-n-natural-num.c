#include <stdio.h>

int main(){

    int n;

    printf("Enter the nummber : ");
    scanf("%d",&n);
    func(n);
    return 0;

}

void func(int num){
    for(int i = 1;i<=num;i++){
        printf("%d\t",i);
    }
}