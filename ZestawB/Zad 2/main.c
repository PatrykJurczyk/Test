#include <stdio.h>
#include <stdlib.h>

int dlugosc(char nap1[])
{
    int wynik = 0;
    for(int i=0; nap1[i]!=0; i++)
    {
        wynik++;
    }
    return wynik;
}


void odwotnie(char tab[])
{
    int i,j;
    int x = dlugosc(tab);
    char pom[x];
    for(i=0,j=x-1; j>0,i<x; i++, j--)
    {
        pom[i] = tab[j];
    }
    pom[i] = 0;
    for(int k=0; k<x; k++)
    {
        tab[k] = pom[k];
    }

}

void foo(char nap1[], char nap2[])
{
    int m = dlugosc(nap1)+dlugosc(nap2);
    char nap[m];
    int i,k;
    for(i=0; nap2[i]!=0; i++)
    {
        nap[i] = nap2[i];
    }
    odwotnie(nap1);
    for(int j=0; nap1[j]!=0; i++,j++)
    {
        nap[i] = nap1[j];
    }
    nap[i] = 0;
    for(k=0; nap[k]!=0; k++)
    {
        nap2[k] = nap[k];
    }
    nap2[k] = 0;
}

int main()
{
    char napis[] = "Patryk";
    char napis1[] = "Jurczyk ";
    foo(napis,napis1);
    printf("%sn",napis1);
    return 0;
}
