//A C Program to read the string in pointers loaction and give it as output.(Pre-Defined) 			© Ishav Verma 19/March/2021
#include <stdio.h>

int main(void) {
  char name[] = "I Love Coding";

  printf("%c \n", *name);     	
  printf("%c \n", *(name+3));	
  printf("%c \n", *(name+8));   
  char *namePtr;

  namePtr = name;
  printf("%c \n", *namePtr);     
  printf("%c \n", *(namePtr+2)); 
  printf("%c \n", *(namePtr+7)); 
}