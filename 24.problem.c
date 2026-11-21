#include <stdio.h>

//  Write a function to convert Celsius temperature into Fahrenheit.

float c2f(float);

float c2f(float c)
{
    return ((9.0 * c) / 5.0) + 32;
}

int main()
{
    float c = 45;
    c2f(c);
    printf("fahrenhiet will be %f\n", c2f(c));
    return 0;
}