/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int i;
   float mark,sum = 0, average;
   printf("Enter the marks obtained in two subjects: ");
  { 
   for(i=0; i<2; i++)
      scanf("%f", &mark);
      sum=sum+mark
  }
   average=sum/2;
   
   printf("\nAverage Mark = %0.2f",average);
   
  return 0;
}
