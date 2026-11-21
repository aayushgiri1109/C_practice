#include <stdio.h>

//  Repeat problem 36 for a general input provided by the user using scanf

int main()
{
    int n;
    scanf("%d\n", &n);

    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d X %d = %d\n", n, i + 1, arr[i]);
    }

    return 0;
}