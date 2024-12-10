// File: hw3_449412_01.c
// Description: Write a program that converts an positive integer value given in seconds into hours, minutes, and seconds.
// Assignment Number: Assignment Number 3
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
    printf("Enter the value in seconds(-1 to end) :");
    int result;
    int hours,minutes,seconds;
   
    scanf("%d",&result);

    
 
    while (result!=-1)
    {
        if (result<-1)
        {
            printf("Please enter positive value!\n");
        }
        else
        {       
         int hours = result/3600;
         int minutes = (result%3600)/60;
         int seconds = (result%3600)%60;
         printf("%d seconds is equal to %d hours, %d minutes and %d seconds.\n",result,hours,minutes,seconds);

        }
     printf("Enter the value in seconds(-1 to end) :");
     scanf("%d",&result);
       
    }
    printf("The program is determined to end.\n");
    
  
   
    


    
       
    
    return 0;

    
}





