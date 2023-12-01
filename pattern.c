#include <stdio.h>

int main(){
    int rows;

    printf("\nEnter the number of rows : ");
    scanf("%d",&rows);
    // right(rows);
    center(rows+2);
    // invert_right(rows);
    // invert_left(rows);
    square(rows);
    square1(rows);



    return 0;

}

void right(int n){
    for(int i = 0 ; i <= n-1;i++){
        for(int j = 0;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }

}

void left(int n){
    for(int i = 0 ; i <= n-1;i++){
        for(int j = 0;j<=2*(n-i);j++){
            printf(" ");
        }
        for(int k = 0;k <= i;k++){
            printf("* ");
            
        }
        printf("\n");
    }
    printf("\n");
}

void center(int n){
    for(int i = 0 ; i <= n-1;i++){
        for(int j = 1;j<=n-i;j++){
            printf(" ");
        }
        for(int k = 0;k <= i;k++){
            printf("* ");
            
        }
        printf("\n");
    }
    
}

void invert_right(int n){
    for(int i = 0 ; i <= n;i++){
        for(int j = 0;j<=n-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}

void invert_left(int n){
    for(int i = 0 ; i <= 2*(n-1);i++){
        for(int j = 0;j<=n-1;j++){
            printf(" ");
        }
        for(int k = 0;k<=i;k++){
            printf(" * ");
        }
        printf("\n");
    }
    printf("\n");
}

void square(int n){
    for(int i = 0 ; i<=n-4;i++){
        printf("   *");
        for(int j = 0 ;j<=n-2;j++){
            printf(" *");
            
        
        }
        printf("\n");
    }
    }

void square1(int n){
    for(int i = 0 ; i<=n-1;i++){
        printf("   *");
        for(int j = 0 ;j<=n-9;j++){
            printf(" *");
        }
        for(int k = 0 ;k<=n-3;k++){
            printf(" ");
        }
        for(int q = 0 ;q<=n-8;q++){
            printf(" *");
        }
        printf("\n");

    }

    }
   