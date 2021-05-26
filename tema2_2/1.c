#include <stdio.h>
#include <stdlib.h>

int n;
double v[150];
int main()
{
    printf("Introduceti N, nr de elemente:\n");
    while(scanf("%d",&n)!=1 || n<0){
        printf("Date Eronate, incercati din nou...\n");
        return 0;
    }
    for(int i=0;i<n;i++){
        scanf("%lf",&v[i]);
    }
    int k=0;
    for(int i=0;i<n;i++){
        if(k==5) k=0,printf("\n%lf ",v[i]);
        else k++, printf("%lf ",v[i]);
    }
    return 0;
}