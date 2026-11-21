#include <stdio.h>

// 5.    Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main()

int* sum(int a , int b ){
    int s = a + b ;
    int* ptr = &s;     
    printf("The sum is %d\n" , s);
    return ptr; 
}
float* average(int a , int b){
    float avg = (a+b)/2.0;
    float* ptr = &avg;
    printf("The average is %f\n", avg);
    return ptr;
}

int main(){
 int a = 6 ;
 int  b = 4 ;
 int* ptr1 ;
 float* ptr2;
 
 ptr1 = sum(a,b);
 ptr2 = average(a,b); 

 printf("The address of sum is %u and of average is %u" , ptr1 , ptr2);

    return 0;
}