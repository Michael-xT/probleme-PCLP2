#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Introduceti A,B,C:\n");
    double a, b, c;
    while (scanf("%lf%lf%lf", &a, &b, &c) != 3)
    {
        printf("Date Eronate, incercati din nou...\n");
        return 0;
    }
    if (a > c)
    {
        double aux = a;
        a = c;
        c = aux;
    }
    if (b > c)
    {
        double aux = b;
        b = c;
        c = aux;
    }
    if (a > b)
    {
        double aux = a;
        a = b;
        b = aux;
    }
    printf("A = %g B = %g C = %g", a, b, c);
    return 0;
}