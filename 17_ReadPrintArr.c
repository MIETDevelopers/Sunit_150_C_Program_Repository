#include<stdio.h>
int main(){
   int disp[2][3];   //2 rows and 3 columns
   int i, j;         //data type declaration
   for(i=0; i<2; i++) {     //forloop of "i" from 0 to 1 including 1 which means 2 rows will be taken
      for(j=0;j<3;j++) {      //forloop of "j" from 0 to 2 including 1 which means 3 columns will be taken
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);          //taking elements from user. "i" is used for row and "j" for columns
      }
   }
   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", disp[i][j]);  //prints the matrix elements in 2darray
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
} 