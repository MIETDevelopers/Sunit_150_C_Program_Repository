#include <stdio.h>
#include <stdlib.h> 
	int main(){
	int *ptr;
		ptr = malloc(15 * sizeof(*ptr)); 
    	if (ptr != NULL) {
        *(ptr + 5) = 298; 
    printf("Value of the 6th integer is %d",*(ptr + 5));
    }
}