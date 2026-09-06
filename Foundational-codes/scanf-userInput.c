#include <stdio.h>

int main(){
    int age = 0;
    float percentage = 0.0;
    char grade = '\0';

    printf("Enter Your Age:");
    scanf("%d", &age);

    printf("Enter Your Percentage:");
    scanf("%f", &percentage);

    printf("Enter Your Grade:");
    scanf("%c", &grade);


    return 0;
}