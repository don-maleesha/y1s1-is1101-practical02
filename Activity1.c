//method 1 to find the grade.

#include <stdio.h>

int main(){

    float mark1, mark2, average_mark;

    printf("Enter maraks : ");
    scanf("%f", &mark1);
    printf("Enter maraks : ");
    scanf("%f", &mark2);

    average_mark = (mark1 + mark2) / 2;

    printf("The Average mark = %f\n", average_mark);

    if (100 >= average_mark && average_mark >=75)
    {

        printf("Grade = A\n");

    } else if (75 > average_mark && average_mark >= 65)
    {
        printf("Grade = B\n");

    } else if (65 > average_mark && average_mark >= 55)
    {
        printf("Grade = C\n");

    } else if (55 > average_mark && average_mark >=35)
    {
        printf("Grade = D\n");

    } else if (35 > average_mark && average_mark >= 0)
    {
       printf("Grade = E\n");

    } else
    {
        printf("An invalid input is occured.Re-enter.\n");

    }

    return 0;

}