#include <stdio.h>
#include <math.h>
float computeBasic(int distance)
{
    if (distance <= 1000)
    {
        return 3.4;
    }
    else if (distance <= 10200)
    {
        return 3.4 + ceil((distance - 1000) / (400 * 1.0)) * 0.22;
    }
    else
    {
        return 3.4 + ceil((10200 - 1000) / (400 * 1.0)) * 0.22 + ceil((distance - 10200) / (350 * 1.0)) * 0.22;
    }
}

float computeS(int dayType, int boardTime, float cost)
{
    if (boardTime < 6 * 60)
    {
        return 0.5 * cost;
    }
    else if (boardTime < (9 * 60 + 30))
    {
        if (dayType)
        {
            return 0.25 * cost;
        }
        else
        {
            return 0;
        }
    }
    else if (boardTime >= (18 * 60))
    {
        return 0.25 * cost;
    }
    else
    {
        return 0;
    }
}
float computeCost(int dayType, int boardTime, int distance)
{
    float cost = computeBasic(distance);
    return cost + computeS(dayType, boardTime, cost);
}
int main()
{
    int dayType;
    int boardHour, boardMinute, boardTime;
    int distance;
    scanf("%d%d%d%d", &dayType, &boardHour, &boardMinute, &distance);

    boardTime = boardHour * 60 + boardMinute;

    printf("%f", computeCost(dayType, boardTime, distance));
}