#include <stdio.h>
#include <stdlib.h>

int n;
double v[150];

void swap(double *x, double *y) {
   double aux = *x;
   *x = *y;
   *y = aux;
}

int main()
{
    printf("Introduceti N, nr de elemente:\n");
    while(scanf("%d",&n)!=1 || n<0){
        printf("Date Eronate, incercati din nou...\n");
        return 0;
    }
    double produs = 1.0;
    double max,min;
    int imax,imin;
    double mediePare = 0.0;
    int kPare =0;
    for(int i=0;i<n;i++){
        scanf("%lf",&v[i]);
        if(i==0) max=v[i],min=v[i],imax=0,imin=0;
        else{
            if(v[i]>max) max=v[i],imax=i;
            if(v[i]<min) min=v[i],imin=i;
        }
        if((int)v[i]%2==0) mediePare+=v[i],kPare++;
        produs*=v[i];
    }
    printf("Produsul elementelor este: %g.\n",produs);
    printf("Maximul este: %g pe pozitia: %d.\n",max,imax);
    printf("Minimul este: %g pe pozitia: %d.\n",min,imin);
    printf("Media celor Pare este: %g.\n",mediePare/kPare);

    printf("Doriti ordonare crescatoare? Tastati 1\nDoriti ordonare descrescatoare? Tastati 2\n");
    int ordonare=0;
    while(scanf("%d",&ordonare)!=1 || ordonare<1 || ordonare >2){
        printf("Date Eronate, incercati din nou...\n");
        return 0;
    }
    for(int i=0;i<n-1;i++)
        for(int j=i;j<n;j++){
            if(ordonare==1){
                if(v[i]>v[j]) swap(&v[i],&v[j]);
            }
            else{
                if(v[i]<v[j]) swap(&v[i],&v[j]);
            }
        }

    printf("\nSirul ordonat este:\n");
    int k=0;
    for(int i=0;i<n;i++){
        if(k==5) k=0,printf("\n%g ",v[i]);
        else k++,printf("%g ",v[i]);
    }
    return 0;
}