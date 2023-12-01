#include<stdio.h>

int main(){
    int input;
    printf("\n Enter the traffic light color by choosing the numbers : \n 1 ==> Red \n 2 ==> Yellow \n 3 ==> Green \n \n color : ");
    scanf("%d",&input);

    switch (input)
    {
    case 1:
        printf("\nStop\n");
        break;
    case 2:
        printf("\nwait\n");
        break;
    case 3:
        printf("\nGo\n");
        break;    
    default :
        printf("\nEnter Vaild Input !\n");
        break;
    }
    return 0;

}
