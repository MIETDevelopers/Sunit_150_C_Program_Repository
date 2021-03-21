#include <stdio.h>
#include <math.h> //math.h is required for using sqrt function

int main() {
	float x1, y1, x2, y2, gdistance;
	printf("Input x1: ");
	scanf("%f", &x1);
	printf("Input y1: ");
	scanf("%f", &y1);
              printf("Input x2: ");
	scanf("%f", &x2);
	printf("Input y2: ");
	scanf("%f", &y2);
	gdistance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));  //euqlidian distance formula without sqrt
	printf("Distance between the said points: %.4f", sqrt(gdistance)); //showingmore accurate value by showing 4 digits after decimal
	printf("\n");
	return 0;
}