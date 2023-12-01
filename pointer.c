#include <stdio.h>

int main(){

    int var = 10;

    int *ptr;

    ptr = &var;

    printf("\n\n %d \n\n %p \n\n %d \n\n",var,ptr,*ptr);

    return 0;

}
