// write a function to reverse an array without using any temporary array
#include <stdio.h>
int a[] = {1, 2, 3};
void reverseArray(int a[], int size)
{
    int tmp[size];
    for (int i = 0; i < size; i++)
    {
        tmp[i] = a[size - i - 1];
    }
    a = tmp;
    for (int i = 0; i < 3; i++)
    {
        printf("%d\t", a[i]);
    }
}
int main()
{
    reverseArray(a, sizeof(a) / sizeof(a[0]));
}