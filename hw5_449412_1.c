// File: hw5_449412_1.c
// Description: Write a program that converts a temperature value given in Celsius to Fahrenheit or Fahrenheit to Celsius.
// Assignment Number: Assignment Number 5
//
// Name: Mahammadali Ismayilov
// SID:  449412
// Email: 449412@ogr.ktu.edu.tr
//
// On my HONOR, Mahammadali Ismayilov, this programming assignment is my own work
// and I have not provided this code to any other student.

#include <stdio.h>

float celsiusToFahrenheit(float degree);
float fahrenheitToCelsius(float degree);

int main(void)
{
    float degree;
    int choice;
while (1)
{
   
    printf("Choose a conversion\n1. Celsius to Farenheit\n2. Farenheit to Celsius\n");
    
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &degree);
        printf("The %.2f°C is equal to %.2f°F\n", degree, celsiusToFahrenheit(degree));
        break;
    }
    else if (choice == 2)
    {
        printf("Enter the temperature in Farenheit: ");
        scanf("%f", &degree);
        printf("The %.2f°F is equal to %.2f°C\n", degree, fahrenheitToCelsius(degree));
        break;
    }
    else
    {
        printf("Invalid Input!\n");
    }

}
 
  return 0;
}

float celsiusToFahrenheit(float degree)
{
    return (degree * 9 / 5) + 32;
}

float fahrenheitToCelsius(float degree)
{
    return (degree - 32) * 5 / 9;
}
