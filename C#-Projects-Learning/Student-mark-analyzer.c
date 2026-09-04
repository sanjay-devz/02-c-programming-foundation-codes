// Create an integer variable that will store the number we get from the user
#include <stdio.h>
#include <string.h>

void main(){

    int myNum;

    // Ask the user to type a number
    printf("Type a number: \n");

    // Get and save the number the user types
    scanf("%d", &myNum);

    // Output the number the user typed
    printf("Your number is: %d", myNum);

    }