#include<stdio.h>

int main()
{
    int n,i;
    float c,big;

    printf("\n\nEnter the number of elements you wish to find the greatest element of: ");
    scanf("%d", &n);
    printf("\n\nEnter %d numbers :\n", n);  //taking limit

    printf("\nElement 1: ");

    //intiliasing the first element
    scanf("%f", &big);

    for(i = 2; i <= n; i++)   //since element 1 is already assigned, we start i from 2
    {
        printf("\nElement %d  : ", i);    //printing till limit is reached
        scanf("%f", &c);                //taking other elements values
        
        if(big < c)       //if first element is lesser than other element
            big = c;    // value of c is assigned to big thus gets assigned the largest value of them all
    }

    printf("\n\n\nThe largest of the %d numbers is  %f ", n, big);   //printing the largest number
    return 0;
}