// File: hw4_449412_1.c
// Description: Write a program that calculates the factorials of numbers from 1 to the number you enter.
// Assignment Number: Assignment Number 4
//
// Name: Mahammadali Ismayilov
// SID:  449412
// Email: 449412@ogr.ktu.edu.tr
//
// On my HONOR, Mahammadali Ismayilov, this programming assignment is my own work
// and I have not provided this code to any other student.
#include <stdio.h>


int main()
{
    printf("This program calculates the factorials of numbers from 1 to the number you enter.\nEnter a positive integer  :");

    int factorial = 1;
    int number;

    scanf("%d",&number);

 
    
    while (number<=0)
    {
       
        printf("Invalid input.Please enter positive integer :");
        scanf("%d",&number);
      
    }
    for (size_t i = 1; i <=number; i++)
    {
        factorial*=i;
        printf("The factorial of %d is %d\n",i,factorial);
    }

    return 0;
    

    

}