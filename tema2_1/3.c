#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //tg
    int k = 0;
    for (int i = 0; i <= 45; i++)
    {
        double x = i;
        x *= (M_PI / 180);
        x = tan(x);

        printf("tan(%d*)=%lf      ", i, x);
        k++;
        if (k == 5)
            printf("\n"), k = 0;
    }
    printf("\n-------------\n");
    k = 0;
    for (int i = 0; i <= 45; i++)
    {
        double x = i;
        x *= (M_PI / 180);
        x = cos(x);

        printf("cos(%d*)=%lf      ", i, x);
        k++;
        if (k == 5)
            printf("\n"), k = 0;
    }
    return 0;
}