// Define a recursive function that check whether a number is prime
#include <stdio.h>
int sl = 0;
void isPrime(int n, int i)
{
    if (n % i == 0)
        sl += 1;
    if (i <= n)
        isPrime(n, i += 1);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    // printf("%d", isPrime(n,1,0));
    isPrime(n, 1);
    if (sl == 2)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }

    return 0;
}