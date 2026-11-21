#include <stdio.h>

int main(){
    int a = 234567;
    printf("the value of a%97 is %d", a%97);

    return 0;  // as the return is 21 so the 234567 is not divisible by  97 
}