// File: hw1_449412_02.c
// Description: Write a program that calculates area of rectangle
// Assignment Number: Assignment Number 1
//
// Name: Mahammadali Ismayilov
// SID:  449412
// Email: 449412@ogr.ktu.edu.tr
//
// On my HONOR, Mahammadali Ismayilov, this programming assignment is my own work
// and I have not provided this code to any other student.

#include <stdio.h>

void main()
{
    
    printf("This program will calculate the area of rectangle\n");

    printf("Enter your numbers :");
    int first_num,second_num;

    scanf("%d %d",&first_num,&second_num);

    int area = (first_num*second_num);

    printf("Area of rectangle = %d",area);
    
}