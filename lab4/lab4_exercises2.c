// write a C program to find the maximum number of an interger array
#include <stdio.h>
#include <string.h>

int findMaximum(int a[], int size)
{
    int max = a[0];

    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}
int main()
{
    int a[] = {1, 2, 3};

    printf("%d", findMaximum(a, sizeof(a) / sizeof(a[0])));
}
