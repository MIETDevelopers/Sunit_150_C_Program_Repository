#include<stdio.h>
 
int main(){
   int n, first = 0, second = 1, next, c; //For the reference to the formuls of the series.
 
   printf("Enter the number of terms\n");
   scanf("%d",&n); //This will scan (read) the number/limit entered by user.
 
   printf("First %d terms of Fibonacci series are :-\n",n);
 
   for ( c = 0 ; c < n ; c++ ) //ForLoop function for the reference to the formuls of the series.
   {
      if ( c <= 1 )
         next = c;
      else
      {
         //Formula to print the series.
         next = first + second;  //eg. 0+1=1 so next is 1
         first = second;  // here first becomes 1
         second = next;  //and here second becomes 1 too
      }
      printf("%d\n",next); //This will give the output.
   }
   return 0;
}