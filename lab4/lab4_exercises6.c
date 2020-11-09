// write a function to sum all even numbers of an interger array

#include <stdio.h>

float sumAll(int a[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
            sum += a[i];
    }

    return sum;
}
int main()
{
    int a[] = {1, 2, 3};

    printf("%.2f", sumAll(a, sizeof(a) / sizeof(a[0])));
}