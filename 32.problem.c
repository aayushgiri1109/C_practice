#include<stdio.h>

// 4.  Write a function and pass the value by reference.
void change(int *a);

void change(int *a){
    *a = *a * 10 ;                                  
}

int main(){
    int x = 30 ;
    printf("Value of x is %d\n", x);
    change(&x);
    printf("New value of x is %d\n", x);
    return 0 ;
}