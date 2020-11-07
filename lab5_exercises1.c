// Input a string and return the string's length
#include <stdio.h>
#define SIZE 100

int getL(char str[])
{
    int cnt = 0;
    while (str[cnt] != '\0')
    {
        cnt++;
    }
    return cnt - 1;
}

int main()
{
    char str[SIZE];
    printf("enter: ");
    fgets(str, SIZE, stdin);
    printf("=>Length = %d", getL(str));
}