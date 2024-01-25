#include <stdio.h>

int main(){

    float number;

    printf("Enter a number between 1 & 100 : ");
    scanf("%f", &number);

    if (number >= 1 && number <= 100)
    {
        printf("The input is valid.\n");

        if (number > 50)
        {
            printf("You are lucky.\n");
            
        } else
        {
            printf("Try again.\n");

        }
        
    } else
    { 
        printf("invalid input.\n");

    }
    
    return 0;

}