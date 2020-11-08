#include <stdio.h>

int ansA(int n)
{
    float a = 0;
    for (int i = 1; i <= n; i++)
    {
        a += i / 2;
    }

    return a;
}
int ansB(int n)
{
    float b = 0;
    for (int i = 1; i <= n; i++)
    {
        b += (2 * i + 1);
    }

    return b;
}
int ansC(int n)
{
    float c = 0;
    for (int i = 1; i <= n; i++)
    {
        int gt = 1;
        for (int j = 1; j <= i; j++)
            gt *= j;
        c += gt + 1;
    }
    return c;
}
int ansD(int n)
{
    float d = 0;
    for (int i = 1; i <= n; i++)
    {
        int gt = 1;
        for (int j = 1; j <= i; j++)
            gt *= j;
        d += gt;
    }
    return d;
}
int ansE(int n)
{
    float e = 0;
    for (int i = 1; i <= n; i++)
    {
        e += (2 * i) / 3;
    }
    return e;
}
int main()
{
    int n;
    scanf("%d", &n);

    printf("%d\n%d\n%d\n%d\n%d", ansA(n), ansB(n), ansC(n), ansD(n), ansE(n));
}