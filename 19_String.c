#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter name: \n");
    fgets(name, sizeof(name), stdin); 
    puts(name);    
    return 0;
}