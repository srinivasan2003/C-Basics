#include <stdio.h>

int main(){

    
    int n;

    printf("Enter the nummber  of students : ");
    scanf("%d",&n);
    
    marklist(n);

    return 0;

}

void marklist(int num){
    float maths,physics,chemistry,total,percentage;
    for(int i = 1;i<=num;i++){
        printf("\nStudent %d = \n",i);
        printf("\n Enter the Marks in Maths : ");
        scanf("%f",&maths);
        printf("\n Enter the Marks in Physics : ");
        scanf("%f",&physics);
        printf("\n Enter the Marks in Chemistry : ");
        scanf("%f",&chemistry);

        total = maths+physics+chemistry;

        percentage = (total/300) * 100;

        printf("\nStudent %d : \n\n\t Total : %.2f\n\t percentage is : %.2f \n",i,total,percentage);

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
    }
}    