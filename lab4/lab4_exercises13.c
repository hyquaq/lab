// Write program to put even and odd elements of array into two new separate arrays.
#include <stdio.h>

int main()
{
    int i, n, sum;
    printf("enter n : ");
    scanf("%d", &n);
    sum = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % 2)
        {
            sum += i;
        }
    }
    printf("\t\t%d", sum);
}