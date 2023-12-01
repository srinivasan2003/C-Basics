#include <stdio.h>
#include <string.h>

int main(){
    char red[10] = "red";
    char yellow[10] = "yellow";
    char green[10] = "green";
    char input[40];
    printf("Enter the traffic light color : ");
    scanf("%s",&input);
    int res_r = strcmp(input,red);
    int res_y = strcmp(input,yellow);
    int res_g = strcmp(input,green);

    if (res_r==0){
        printf("\nStop\n");
    }else if(res_y==0){
        printf("\nWait\n");
    }else if(res_g==0){
        printf("\nGo\n");
    }else{
        printf("\nEnter the vaild input !\n");
    }
    return 0;

}
