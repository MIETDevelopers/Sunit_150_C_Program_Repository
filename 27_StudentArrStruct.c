#include <stdio.h>
void largest(int A, int B, int C);
main(){
int A, B, C;
scanf("%d %d %d", &A, &B, &C);
largest(A, B, C);
}
void largest(int A, int B, int C){
if (A >= B && A >= C)
printf("%d is the largest number.", A);
if (B >= A && B >= C)
printf("%d is the largest number.", B);
if (C >= A && C >= B)
printf("%d is the largest number.", C);
}