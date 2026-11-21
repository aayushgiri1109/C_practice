#include <stdio.h>

// sum of first 10 natural numbers with do while 

int main(){
    int i = 1 ;
    int sum = 0;

    do{
        sum +=i;
        i++;
    } 
    while (i<=10);
    
    printf("the sum of first 10 natural numbers is %d\n", sum);
    
       
    return 0;
}