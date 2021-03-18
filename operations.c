#include <stdio.h>
int main() {    

    int num1, num2, sum; //declaring variables
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // calculating sum
    sum = num1 + num2;      //we use + for addition, - for subtraction, / for division and * for multiplication
    
    printf("%d + %d = %d", num1, num2, sum);
    return 0;
}