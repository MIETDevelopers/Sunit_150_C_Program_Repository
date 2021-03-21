#include<stdio.h>
int main(){
	int i;
	float arr[5];    //array of size 5 and data type as float

	printf("Please enter five numbers:\n ");

	for (i = 0; i < 5; ++i)      //for loop starting from 0 to 4 including 4
	{
    scanf("%f", &arr[i]);   //initializing array till "i" which is 5 so it will take 5 inputs
	}

		for (i = 1; i < 5; ++i)
		{
    	if (arr[0] < arr[i])    // if value at 0 index is less than value at i index
        	arr[0] = arr[i];    //0 index gets assigned the value at "i" index thus gets assigned the largest value of them all
		}
	printf("Largest element = %.2f", arr[0]);   //prints the largest elemnt with accuracy of 2 elements

	return 0;
}