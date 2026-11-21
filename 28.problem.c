#include <stdio.h>

/*Write a program using function to print the following pattern (first n lines)
*
***
*****
*/

int main()
{
    int n = 3;
    for (int i = 0; i < 3; i++)
    {
        // this loop runs from 0 to 2 ;
        // if i = 0 --> print 1 star
        // if i = 2 --> print 3 star
        // if i = 3 --> print 5 star
        // no_of_stars = 2*i+1;

        //  this loop will print (2*i+1)stars
        for (int j = 0; j < i; j++)
        {
            print("*");
        }
        printf("\n");
    }

    return 0;
}