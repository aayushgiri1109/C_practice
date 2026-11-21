#include <stdio.h>

// Write a program to print the address of a variable. Use this address to get the value ofthe variable

int main()
{
    int a = 6;
    int *b = &a;
    printf("Address of variable : %p\n", &a);
    printf("Value of variable : %d\n", *b); // *(&i)
    return 0;
}