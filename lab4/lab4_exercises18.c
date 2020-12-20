// Write program to multiply two matrices.
#include <stdio.h>
#define SIZE 10

void computeMultiplyTwoMatrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int c[SIZE][SIZE], int x, int y, int z)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < z; j++)
        {
            for (int k = 0; k < y; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
int main(void)
{
    FILE *fi = fopen("input.txt", "r");
    int a[SIZE][SIZE] = {0};
    int b[SIZE][SIZE] = {0};
    int c[SIZE][SIZE] = {0};
    int x = 2, y = 3, z = 4;

    fscanf(fi, "%d", &x);
    fscanf(fi, "%d", &y);
    fscanf(fi, "%d", &z);
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            fscanf(fi, "%d", &a[i][j]);
        }
    }
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < z; j++)
        {
            fscanf(fi, "%d", &b[i][j]);
        }
    }

    computeMultiplyTwoMatrices(a, b, c, x, y, z);

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < z; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    fclose(fi);
    return 0;
}