#include<stdio.h>
int main(){
    char operator;    //declaring data type 
    double a, b;
    printf("Enter an operator (+, -, *, /):"); 
    scanf("%c", &operator);   //taking operator input from user. + for addition, - for subtraction, * for multiplication, / for division
    printf("Enter two operands:");
    scanf("%lf %lf",&a, &b);  //taking values from user to be processed
    switch(operator)            //switch function to print result according to case
        {
        case '+':         //if user puts + operand then this case prints the result
            printf("%.2lf + %.2lf = %.2lf",a, b, a+b);      //printing addition of values
            break;                                      //exit

        case '-':
            printf("%.2lf - %.2lf = %.2lf",a, b, a-b); 
            break;

        case '*':
            printf("%.2lf * %.2lf = %.2lf",a, b, a*b); 
            break;

        case '/':
            printf("%.2lf / %.2lf = %.2lf",a, b, a/b); 
            break;
    printf("Error encountered by the input values");    //if user puts wrong input then this is printed
    }
    return 0;
}