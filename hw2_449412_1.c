// File: hw2_449412_1.c
// Description: Write a program that calculates BMI(Body mass index)
// Assignment Number: Assignment Number 2
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

    printf("Please enter your height in meters :");
    float height;
    scanf("%f",&height);
    printf("Please enter your weight :");
    float weight;
    scanf("%f",&weight);
    float BMI = weight/(height*height);

    if(BMI<18.5)
    {
      printf("Your BMI is %.1f\nYou are \"Underweight\" category",BMI);
    }
    else if (BMI>=18.5 && BMI<25)
    {
      printf("Your BMI is %.1f\nYou are \"Normalweight\" category",BMI);
    }
    else if (BMI>=25 && BMI<30)
    {
      printf("Your BMI is %.1f\nYou are \"Overweight\" category",BMI);
    }
    else if (BMI>=30)
    {
      printf("Your BMI is %.1f\nYou are \"Obese\" category",BMI);
    }
    
    return 0;
       
}