#include <stdio.h>

// Write a program using function to find average of three number

float average(int a, int b , int c);

float average(int a , int b , int c){
    return (a+b+c)/3.0;
}


int main(){
    int a = 2 ;
    int b = 5 ;
    int c = 4 ;
    average(a,b,c);
    printf("The average of 3 numbers is %f\n" , average(a,b,c));
    return 0;
}