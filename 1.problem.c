#include <stdio.h>

int main(){

    //length =  5 ;
    //breadth = 2 ;

    int length , breadth ;

    printf("enter the length\n");
    scanf("%d", &length);

    printf("enter the breadth\n");
    scanf("%d", &breadth);

    printf("The area of rectangle is %d", length * breadth);
    return 0;
}