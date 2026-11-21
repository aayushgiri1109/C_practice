#include <stdio.h>

// reverse multiplication table of 10

int main(){
    int n = 10;  // you can use scanf to give input and do not take the value of n 
    for(int i = 10 ; i ; i--){
        printf("%d X %d = %d\n", n , i , n*i);
    }
    return 0;
} 