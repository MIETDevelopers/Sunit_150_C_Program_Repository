#include <stdio.h>
int main()
{
  int Number, Reminder, Sum=0;

  printf("Please Enter any number\n");
  scanf("%d", &Number);  //taking input from user

  while(Number > 0)
  {
     Reminder = Number % 10;   //any number divided by gives last digit in remainder
     Sum = Sum+Reminder;        //so we add the last digit to sum
     Number = Number / 10;      //here we eradicate the last digit of number so we can process the digit previous to it next in the loop
  }

  printf("Sum of the digits of Given Number = %d\n", Sum);  //prints the sum of all digits of integer

  return 0;
}