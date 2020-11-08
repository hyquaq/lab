// write a C program to find the minimum number of an interger array
#include <stdio.h>
#include <string.h>

int findMinimun(int a[], int size)
{
    int min = a[0];

    for (int i = 0; i < size; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}
int main()
{
    int a[] = {1, 2, 3};
    

    printf("%d", findMinimun(a, sizeof(a) / sizeof(a[0])));
}
