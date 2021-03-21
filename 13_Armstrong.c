#include <stdio.h>
int main() {
  int num, originalNum, remainder, result = 0;
  printf("Enter a three-digit integer: \n");
  scanf("%d", &num);  //taking user input
  originalNum = num;

  while (originalNum != 0) {
    remainder = originalNum % 10;      //any number divided by 10 gives last digit in remainder
        
    result += remainder * remainder * remainder;         //so we add the last digit to result and multiply cute root of remainder
        
    originalNum /= 10;     //here we eradicate the last digit of integer so we can process the digit previous to it next in the loop
  }

  if (result == num)    //if result comes to be num then its true 
      printf("%d is an Armstrong number.", num);
  else
      printf("%d is not an Armstrong number.", num);

  return 0;
}