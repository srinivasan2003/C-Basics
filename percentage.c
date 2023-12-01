#include<stdio.h>

int main(){
    float physics;
    float chemistry;
    float biology;
    float maths;
    float computer;

    printf("Enter your Marks in the subjects : \n\n ");
    printf("\nEnter your Physics Marks : ");
    scanf("%f",&physics);
    printf("\nEnter your Chemistry Marks : ");
    scanf("%f",&chemistry);
    printf("\nEnter your Biology Marks : ");
    scanf("%f",&biology);
    printf("\nEnter your Maths Marks : ");
    scanf("%f",&maths);
    printf("\nEnter your Computer Marks : ");
    scanf("%f",&computer);

    float total = physics+chemistry+biology+maths+computer;
    float percentage = (total/500) * 100;
    printf("\n\n %.2f \n\n",percentage);
    if(percentage >= 90){
        printf("\n Congratulations \n\n You got Grade : A with %.2f percentage.\n",percentage);
    }else if(percentage >= 80){
        printf("\n Congratulations \n\n You got Grade : B with %.2f percentage.\n",percentage);
    }else if(percentage >= 70){
        printf("\n Congratulations \n\n You got Grade : C with %.2f percentage.\n",percentage);
    }else if(percentage >= 60){
        printf("\n Good \n\n You got Grade : D with %.2f percentage.\n",percentage);
    }else if(percentage >= 40){
        printf("\n Good \n\n You got Grade : E with %.2f percentage.\n",percentage);
    }else{
        printf("\nSorry, You Failed , Better luck next time.\n ");
    }

    return 0;

}
