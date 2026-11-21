#include <stdio.h>

int main()
{

    // 8! = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8

    int product = 1;
     int n = 5 ;
    for (int i = 1; i <= 5; i++)
    {
        product *= i;
    }
    printf("the factorial of 5 is %d\n", product);

    return 0;
}