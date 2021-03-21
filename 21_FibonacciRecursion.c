#include<stdio.h>    
int main(){    
	int n1=0,n2=1,n3,i,number;    //taking the value of two initial varaibles n1 and n2
	printf("Enter the number of elements: ");    
	scanf("%d",&number);    //takes limit from user
	printf(" %d %d",n1,n2);   //prints the result 
	for(i=2;i<number;++i)    //for loop starting from 2 because 0 and 1 are already printed initially till the limit
		{	
			n3=n1+n2;    //acc to this n3=0+1 which is 1
  			printf(" %d",n3);    //prints n3
  			n1=n2;    //now value of n2 is assigned to n1 i.e. n1 becomes 1
  			n2=n3;    // value of n3 is assigned to n1 i.e. n2 becomes 1. Thats how the next elemnt is passes in loop and gets added to previous number.
 		}  
	return 0;  
}