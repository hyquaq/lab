// read the input data contains 20 interger numbers, then write to new file the sum of them
#include <stdio.h>

int main()
{
    int num = 0, sum = 0;
    char c[100];
    FILE *fi = fopen("input02.txt", "r");
    while (!feof(fi))
    {
        fscanf(fi, "%s", &c);
        printf("->%s\n", c);
    }
    // for (int i = 0; i < 20; i++)
    // {
    //     fscanf(fi, "%d", &num);
    //     // printf("%d\t", num);
    //     sum += num;
    // }
    fclose(fi);
    // FILE *fo = fopen("output01.txt", "w");
    // fprintf(fo, "%d", sum);
    // fclose(fo);
}