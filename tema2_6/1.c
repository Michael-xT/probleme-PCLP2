#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void scrvect(double [],int,char []);
int citvect(double [],int,char []);
double prodscal(double *,double *,int);
void sumvect(double *,double *,double *,int);
void scalvect(double *,double *,double,int n);

int main()
{
    int n;
    double *pvX,*pvY,*pvZ,*pvP;
    double a;

    printf("Introduceti n = ");
    if(scanf("%d",&n)!=1)
    {
        printf("Date invalide");
        return 0;
    }

    pvX=(double*)malloc(n*sizeof(double));
    if(!pvX){
        printf("Memorie insuficienta");
        return 0;
    }
    pvY=(double*)malloc(n*sizeof(double));
    if(!pvY){
        printf("Memorie insuficienta");
        return 0;
    }

    if(citvect(pvX,n,"X")!=n){
        printf("Nr insuficient de elemente");
        return 0;
    }
    if(citvect(pvY,n,"Y")!=n){
        printf("Nr insuficient de elemente");
        return 0;
    }

    scrvect(pvX,n,"X");
    scrvect(pvY,n,"Y");

    printf("Prod. scalar al celor 2 vectori: %g\n",prodscal(pvX,pvY,n));
    pvZ=(double*)malloc(n*sizeof(double));
    if(!pvZ){
        printf("Memorie insuficienta");
        return 0;
    }
    sumvect(pvX,pvY,pvZ,n);
    scrvect(pvZ,n,"Vectorul suma Z");

    printf("Valoarea scalarului ce inmulteste vectorul X a=");
    do{
        if(scanf("%lf",&a)==1) break;
        fflush(stdin);
    }while(1);

    pvP=(double*)malloc(n*sizeof(double));
    if(!pvP){
        printf("Memorie insuficienta");
        return 0;
    }
    scalvect(pvX,pvP,a,n);
    scrvect(pvP,n,"P");
    return 0;
}

int citvect(double *v,int n,char c[]){
    int i;
    printf("Introduceti elem. vectorului %s\n",c);
    for(i=0;i<n;i++,v++){
        if(scanf("%lf",v)!=1){
            fflush(stdin);break;
        }
    }
    return i;
}

void scrvect(double v[],int n,char c[]){
    int i;
    printf("Vectorul %s\n",c);
    for(i=0;i<n;i++)
        printf("%12g%c",v[i],i%5==4||i==n-1?'\n':' ');
}

double prodscal(double *pv1,double *pv2,int n){
    int i;
    double s=0.0;
    for(i=0;i<n;i++)
        s+=(*pv1++)*(*pv2++);
    return s;
}

void sumvect(double x[],double y[],double s[],int n){
    int i;
    for(i=0;i<n;i++)
        s[i]=x[i]+y[i];
}

void scalvect(double *x,double *p,double a,int n){
    int i;
    for(i=0;i<n;i++)
        *p++=a*(*x++);
}
