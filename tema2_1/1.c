#include <stdio.h>
#include <stdlib.h>

long factorial(int x)
{
    long fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    printf("Introduceti N si K:\n");
    int n, k;
    while (scanf("%d%d", &n, &k) != 2 || n < 0 || k < 0 || n < k)
    {
        printf("Date Eronate, incercati din nou...\n");
        return 0;
    }
    printf("Combinari de %d luate cate %d este = %ld", n, k, (factorial(n) / (factorial(k) * factorial(n - k))));
    return 0;
}