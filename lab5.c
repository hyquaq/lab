#include <stdio.h>
#include <ctype.h>
#define SIZE 100

void getData(char str[])
{
    printf("enter: ");
    fgets(str, SIZE, stdin);
}

int getL(char str[])
{
    int cnt = 0;
    while (str[cnt] != '\0')
    {
        cnt++;
    }
    return cnt - 1;
}

int checkIsBlank(char c)
{
    return isblank(c);
}
// is number
int checkIsNumber(char c)
{
    return isdigit(c);
}
// is letter
int checkIsAlpha(char c)
{
    return isalpha(c);
}
// is number or letter
int checkIsAlnum(char c)
{
    return isalnum(c);
}

int checkIsLower(char c)
{
    return islower(c);
}

int checkIsUpper(char c)
{
    return isupper(c);
}

int checkToLower(char c)
{
    return tolower(c);
}

int checkToUpper(char c)
{
    return toupper(c);
}
// ctype.h

// string.h

int main()
{
    // char str[SIZE];
    // getData(str);
    // printf("=> %d", getL(str));

    char c;
    scanf("%c", &c);

    printf("%d", checkIsNumber(c));
}