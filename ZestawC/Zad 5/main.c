#include <stdio.h>
#include <stdlib.h>

int foo(float **tab, int n, int m)
{
    int wynik = 1;
    for(int i=0; i<n; i++)
    {
        if(i%2 == 0)
        {
            for(int j=0; j<m; j++)
            {
                if(j%2==0)
                {
                    wynik *= *(*(tab+i)+j);
                }
            }
        }
    }
    return wynik;
}

int main()
{
    int n = 3;
    int m = 4;
    float **tab = malloc(n*sizeof(float*));
    for(int i=0; i<n; i++)
    {
        *(tab+i) = malloc(m*sizeof(float));
    }
    *(*(tab+0)+0) = 2;
    *(*(tab+0)+1) = 2;
    *(*(tab+0)+2) = 1;
    *(*(tab+0)+3) = 2;
    *(*(tab+1)+0) = 7;
    *(*(tab+1)+1) = 7;
    *(*(tab+1)+2) = 4;
    *(*(tab+1)+3) = 4;
    *(*(tab+2)+0) = 9;
    *(*(tab+2)+1) = 9;
    *(*(tab+2)+2) = -1;
    *(*(tab+2)+3) = 1;
    printf("%d",foo(tab,n,m));
    return 0;
}
