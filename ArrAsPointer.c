#include <stdio.h>

int main()
{
    int arr[10];
    printf("enter the values of array");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d",*(arr+i)); // array as a pointer
    }