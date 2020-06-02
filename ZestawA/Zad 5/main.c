#include <stdio.h>
#include <stdlib.h>

int foo(float **tab, int n, int m)
{
    int wynik = 0;
    for(int i=0; i<n; i++)
    {
        if(i==0 || i==n-1)
        {
            for(int j=0; j<m; j++)
            {
                if(j==0 || j==m-1)
                {
                    if(*(*(tab+i)+j) != 0)
                    {
                        wynik++;
                    }
                }
            }
        }
    }
    if(wynik == 4)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n = 2;
    int m = 3;
    float **tab = malloc(n*sizeof(float*));
    for(int i=0; i<n; i++)
    {
        *(tab+i) = malloc(m*sizeof(float));
    }
    *(*(tab+0)+0) = 3;
    *(*(tab+0)+1) = 0;
    *(*(tab+0)+2) = 1;
    *(*(tab+1)+0) = 2;
    *(*(tab+1)+1) = 1;
    *(*(tab+1)+2) = 2;
    printf("%d",foo(tab,n,m));
    return 0;
}
