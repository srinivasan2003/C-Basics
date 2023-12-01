#include<stdio.h>

int main(){  
    float b_salary,hra,da;
    printf("\n\n Enter Your Basic Salary : ");
    scanf("%f",&b_salary);
    if(b_salary <= 10000){
        hra= 0.2*b_salary;
        da= 0.8*b_salary;
        printf("\n\nYour Salary = %.2f \n\nYour HRA = %.2f \n\nYour DA = %.2f \n\n",b_salary,hra,da);
    }else if(b_salary <= 20000){
        hra= 0.25*b_salary;
        da= 0.9*b_salary;
        printf("\n\nYour Salary = %.2f \n\nYour HRA = %.2f \n\nYour DA = %.2f \n\n",b_salary,hra,da);
    }else if(b_salary > 20000){
        hra= 0.3*b_salary;
        da= 0.95*b_salary;
        printf("\n\nYour Salary = %.2f \n\nYour HRA = %.2f \n\nYour DA = %.2f \n\n",b_salary,hra,da);
    }
    float gross_salary = b_salary+hra+da;
    printf("\n\n Gross Salary : %.2f \n\n",gross_salary);
    return 0;
}
