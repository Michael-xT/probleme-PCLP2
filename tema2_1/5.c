#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    for (int j = 0; j < 13; j++)
    {
        for (int i = 0; i < 25; i++)
        {
            if (i >= (int)(25 / 2) - j && i <= (int)(25 / 2) + j)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}