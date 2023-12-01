#include<stdio.h>

int main(){  
    float unit,t;

    printf("\n\n Enter unit :");
    scanf("%f",&unit);
    if (unit <= 50){
       t=unit*0.50; 
       printf("\n\n bill : %.2f\n\n",t);
    }else if(unit > 50 && unit < 150){
        float a=unit-50;
        float b=a*0.75;
        float t=(50*0.50)+b;
        printf("\n\n bill : %.2f\n\n",t);
    }else if(unit > 150 && unit < 250){
        float a=unit-50;
        float b=unit-150;
        float c=(50*0.50)+(150*0.75)+(b*1.20);
        printf("\n\n bill : %.2f\n\n",c);
    }else if(unit > 250 && unit < 500){
        float a=unit-50;
        float b=unit-150;
        float c=unit-250;
        float t=(50*0.50)+(150*0.75)+(250*1.20)+(c*1.50);
        printf("\n\n bill : %.2f\n\n",t);

    }else if(unit > 500){
        float a=unit-50;
        float b=unit-150;
        float c=unit-250;
        float t=(50*0.50)+(150*0.75)+(250*1.20)+(c*1.50);
        float d= 0.2*t;
        float e=d+t;
        printf("\n\n bill : %.2f\n\n",e);
    }
    return 0;
}
