// write program to delete an element from an array at specified position
#include <stdio.h>

void detele(int a[], int size, int position)
{
    for (int i = 0; i < size; i++)
    {
        if (i != position)
        {
            printf("%d\t", a[i]);
        }
    }
}
int main()
{
    int a[] = {1, 2, 3};
    int position = 1;

    detele(a, sizeof(a) / sizeof(a[0]), position);
}