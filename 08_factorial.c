#include<stdio.h>  
int main()    
{    
 int i,factorial=1,number;    //factorial value is initially 1 because its getting multiplies and will give garbage if takes random value
 printf("Enter a number: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){      //running loop till value reaches the number
      factorial=factorial*i;    //factorial formula multiplying all numbers with each other till reaching the given number value
  }    
  printf("Factorial of %d is: %d",number,factorial);    
return 0;  
} 