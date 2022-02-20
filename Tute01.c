/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1,mark2,avg;

  printf("Enter Your Mark 01 : ");
  scanf("%f",&mark1);

  printf("Enter Your Mark 02 : ");
  scanf("%f",&mark2);

  avg=(mark1 + mark2)/2;
  printf("Your Average is %.2f",avg);
  
  return 0;
}

