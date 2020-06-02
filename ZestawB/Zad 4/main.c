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

void fun(char *sciezka, int **tab, int n, int m)
{
    int wynik=0;
    odwotnie(sciezka);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            tab[i][j] = rand() % 100 + 1;
            wynik += tab[i][j];
        }
    }
    printf("%d",wynik);
}


int main()
{
    int n = 2;
    int m = 3;
    char nap[] = "Jurczyk";
    int **tab = malloc(n*sizeof(int*));
    for(int i=0; i<n; i++)
    {
        *(tab+i) = malloc(m*sizeof(int));
    }
    fun(nap,tab,n,m);
    printf("\n");
    printf("%s",nap);
    return 0;
}
