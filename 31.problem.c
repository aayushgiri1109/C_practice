#include <stdio.h>

//  3. Write a program to change the value of a variable to ten times its current value.

// int main(){
//     int i = 6 ;
//     int *ptr = &i;
//     printf("Value of i is %d\n", *(&i));                // normally by pointers

//     *ptr = i*10;
//     printf("New value of i is %d\n", *ptr);
//     return 0;
// }


void change(int *a);

void change(int *a){
    *a = *a * 10 ;                                 // with function 
}

int main(){
    int x = 30 ;
    printf("Value of x is %d\n", x);
    change(&x);
    printf("New value of x is %d\n", x);
    return 0 ;
}