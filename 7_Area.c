#include <stdio.h>
#include <math.h>
int main(){
	char purpose;   
	printf("Enter the mode of operation.\n 1.Area of Circle.\n 2.Area of Square.\n 3.Area of Rectangle.\n"); 
	scanf("%c", &purpose); 		//taking user choice 1 for circle, 2 for square, 3 for rectangle
	float value1, value2;
	printf("Enter values of the shape:\n");
	scanf("%f %f", &value1, &value2); 
	switch(purpose)  //using switch function which will choose what to print according to the case
	{
		case'1':
			printf("Area of Circle = %f", ((22*value1*value1)/7));  //will print this if user input is 1 on mode of opearion purpose
			break;
		case'2':
			printf("Area of Square = %f", value1*value1); //will print this if user puts 2
			break;	
		case'3':
			printf("Area of Rectangle = %f", value1*value2); //and this if user puts 3
			break;
		
		default:
            printf("Error eccoured, Please enter the values correctly!");	//will print this if user choose none or puts wrong input
	}
	return 0; 
}