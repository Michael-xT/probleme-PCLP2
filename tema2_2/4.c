#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char c,propozitie[255];
int main()
{
    printf("[--> Va rugam introduceti un text de maxim 255 de caractere!\n\n");
    fflush(stdin);
    //1
    fgets(propozitie, 255, stdin);
    int nrCaractere = 0;
    while(propozitie[nrCaractere]!=0)nrCaractere++;
    printf("\n[--> Numarul de caractere introduse este: %d\n",nrCaractere);


    int cuvantInceput = 0,nrCuvinte=0,nrAa=0;
    for(int i=0;i<nrCaractere;i++){
        if((propozitie[i]>='a' && propozitie[i]<='z')||(propozitie[i]>='A' && propozitie[i]<='Z')||(propozitie[i]>='0' && propozitie[i]<='9')){
            cuvantInceput = 1;
            if((propozitie[i+1]==' ' || propozitie[i+1]==10 /*Adica daca e enter*/)) {
                cuvantInceput = 0,nrCuvinte++;
            }
        }
        if(propozitie[i]=='a' || propozitie[i]=='A') nrAa++;
    }
    //2
    printf("[--> Numarul de cuvinte este: %d\n",nrCuvinte);
    //3
    printf("[--> Exista %d litere 'A' sau 'a'!\n",nrAa);
}