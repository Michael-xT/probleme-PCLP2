#include <stdio.h>
#include <stdlib.h>

char sir_1[255],sir_2[255];

int max(int a,int b){
    return a>=b?a:b;
}

int main()
{
    printf("Introduceti sirul 1: ");
    scanf("%s",&sir_1); 
    printf("Introduceti sirul 2: ");
    scanf("%s",&sir_2);

    //1
    int ksir1=0,ksir2=0;
    while(sir_1[ksir1] != 0) ksir1++;
    while(sir_2[ksir2] != 0) ksir2++;
    printf("Sirul 1 are lungimea: %d\nSirul 2 are lungimea: %d\n",ksir1,ksir2);

    //2
    for(int i=0;i<max(ksir1,ksir2);i++){
        if(sir_1[i]<sir_2[i]){ printf("Sirul 2 > Sirul 1");break;}
        if(sir_1[i]>sir_2[i]){ printf("Sirul 1 > Sirul 2"); break; }
        if(i==ksir1-1 && ksir1==ksir2){printf("Sirul 1 = Sirul 2");}
    }

    //3
    char sir_3[255];
    for(int i=0;i<=ksir1;i++)
        sir_3[i]=sir_1[i];
    printf("\n%s\n",sir_3);
    
    //4
    fflush(stdin);
    char c;
    do {
        c=getchar();
        putchar (c);
    } while (c!=10);
}