#include <stdio.h>
int main()
{
    int n, i, j, temp;
    int arr[64];      //an array of size 64
    printf("Enter number of elements\n");
    scanf("%d", &n);   //taking limit from user
 
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)     //for loop till the limit is reached
    {
        scanf("%d", &arr[i]);   //will take input values till for loop reaches the limit value
    }
    for (i = 1 ; i <= n - 1; i++)     {
	    j = i;
            while ( j > 0 && arr[j-1] > arr[j])
            {    
                temp     = arr[j];
                arr[j]   = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
    }
    printf("Sorted list in ascending order:\n");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}