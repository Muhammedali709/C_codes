// File: hw2_449412_1.c
// Description: Write a code to guess a random number between 1 to 100
// Assignment Number: Assignment Number 2
//
// Name: Mahammadali Ismayilov
// SID:  449412
// Email: 449412@ogr.ktu.edu.tr
//
// On my HONOR, Mahammadali Ismayilov, this programming assignment is my own work
// and I have not provided this code to any other student.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target, guess, attempts = 0;
    
 
    srand(time(0));
    
  
    target = rand() % 100 + 1;

    printf("Welcome to the Guessing Game!\n");
    printf("The computer has selected a random number between 1 and 100. Try to guess it!\n");

    while (attempts < 10) {
        printf("Enter your guess(between 1 and 100): ");
        scanf("%d", &guess);
        attempts++;
        

        if (guess > target) {
            printf("Too high! Try again.\n");
        } else if (guess < target) {
            printf("Too low! Try again.\n");
        } else {
          
            printf("Correct! You guessed the number in %d attempts.\n", attempts);
            return 0;
        }
    }

    
    printf("Game over! You have exceeded the limit of 10 attempts.\n");
    return 0;
}







