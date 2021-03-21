#include <stdio.h>
void main(){ 
    int num;
    int i,  keynum, found = 0;   //taking default value of "found" as 1
 
    printf("Enter the number of elements: \n");
    scanf("%d", &num);    //taking array size from user
    int array[num];    //array of size put by user
    printf("Enter the elements one by one: \n");
    for (i = 1; i <= num; i++)  
    {
        scanf("%d", &array[i]);  //takes array elements from user
    }
 
    printf("Enter the element to be searched: ");
    scanf("%d", &keynum);
    for (i = 1; i <= num ; i++)       //forloop till the limit value is reached 
    {
        if (keynum == array[i] )    //if the element search is equal to value at array index
        {
            found = 1;   //which means its found
            break;          //exits the loop
        }
    }
    if (found == 1)      
        printf("Element is present in the array at position %d .",i);    //result is printed
    else
        printf("Element is not present in the array.\n");
}