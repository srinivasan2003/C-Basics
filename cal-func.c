#include<stdio.h>
#include<string.h>

int main(){
    int n1,n2,i;

    printf("\nEnter two Numbers : \n");
    scanf("%d \t %d",&n1,&n2);
    printf("\n 1 => +\n 2 => -\n 3 => *\n 4 => /\n 5 => mod \n\n");
    printf("\nPlease Enter the Operator : ");
    scanf("%d",&i);
    
    // char cadd = '+';
    // char csub = '-';
    // char cmul = '*';
    // char cdiv = '/';
    // char cmod = '%';   

    // int iadd = strcmp(i,cadd);
    // int isub = strcmp(i,csub);
    // int imul = strcmp(i,cmul);
    // int idiv = strcmp(i,cdiv);
    // int imod = strcmp(i,cmod);

    if(i == 1 ){
        printf("%d\n",add(n1,n2));
    }else if(i == 2 ){
        printf("%d\n",sub(n1,n2));
    }else if(i == 3 ){
        printf("%d\n",mul(n1,n2));
    }else if(i == 4 ){
        printf("%d\n",div(n1,n2));
    }else if(i == 5){
        printf("%d\n",mod(n1,n2));
    }else{
        printf("\n\nEnter the right Operator . \n\n");
    }


    return 0;
}

int add(int a , int b){
    int z = a+b;
    return z;
}

int sub(int a , int b){
    int z = a-b;
    return z;
}

int mul(int a , int b){
    int z = a*b;
    return z;
}

int div(int a , int b){
    int z = a/b;
    return z;
}

int mod(int a , int b){
    int z = a%b;
    return z;
}
