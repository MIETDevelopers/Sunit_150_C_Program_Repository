#include<stdio.h>  
  
int main()  
{  
    int num, count = 2, flag = 1;  //taking count from 2 as 0 and 1 are alredy divisible by any number
  
    printf("Enter a number\n");  
    scanf("%d", &num);  
  
    while(count < num)        //taking while loop with count starting from 2 and we dont use = as a number is already divisible by itself
    {  
        if(num%count == 0)    //if number is divisible by count then it will exit the loop as number is not prime
        {  
            flag = 0;  
            break;  //exit out of loop
        }  
        count++;  
    }  
  
    if(flag) printf("%d is prime number\n", num);    //if flag is 1 as its default value its prime and if changed to 0 its not prime
    else     printf("%d is not prime number\n", num);  
  
    return 0;  
}  