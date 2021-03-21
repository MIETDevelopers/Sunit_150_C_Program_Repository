//A C Program to swap two numbers using call by value.              
#include <stdio.h> 
  
int main() 
{ 
    int x, y;   //variable declaration
    printf("Enter Value of x "); 
    scanf("%d", &x);     //taking user input in variable x
    printf("\nEnter Value of y "); 
    scanf("%d", &y); 
    
    int temp = x;      //temp is assigned the value of x. Lets say x=2
    x = y;              //Now x is assigned the value of y. Lets say y=4. Thus x becomes 4
    y = temp;           //Now y gets assigned the value of temp which is value of x which is 2. Thus, y becomes 2 and thats how numbers are swapped.
  
    printf("\nAfter Swapping: x = %d, y = %d", x, y);    //prints the swapped results
    return 0; 
}