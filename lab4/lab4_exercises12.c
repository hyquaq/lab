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