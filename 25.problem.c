#include <stdio.h>

/* Write a function to calculate force of attraction on a body of mass
earth. Consider
g = 9.8m/s²

*/

float force(float);

float force(float mass)
{
    return mass * 9.8;
}
int main()
{
    float mass = 98;

    force(mass);
    printf("Force of attraction is %.2f\n", force(mass));
    return 0;
}