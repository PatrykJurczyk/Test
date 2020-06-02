#include <stdio.h>
#include <stdlib.h>

void foo(float **t, float **t1, float **t2)
{
    float wynik1 = 0;
    float wynik2 = 0;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            t[i][j] = rand() % 1 + 1;
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            t1[i][j] = rand() % 1 + 1;
        }
    }
    for(int k=0; k<2; k++)
    {
        for(int l=0; l<2; l++)
        {
            t2[k][l] = t[k][l] * t1[k][l];
        }
    }
    return t2;
}

int main()
{
    float **t = malloc(sizeof(int*)*2);
    for(int i=0; i<2; i++)
    {
        *(t+i) = malloc(sizeof(int*)*2);
    }
    float **t1 = malloc(sizeof(int*)*2);
    for(int i=0; i<2; i++)
    {
        *(t1+i) = malloc(sizeof(int*)*2);
    }
    float **t2 = malloc(sizeof(int*)*2);
    for(int i=0; i<2; i++)
    {
        *(t2+i) = malloc(sizeof(int*)*2);
    }
    foo(t,t1,t2);
    for(int i=0; i<2; i++)
    {
        printf("[");
        for(int j=0; j<2; j++)
        {
            printf("%0.0f",t2[i][j]);
            if(j == 0)
            {
                printf(" ");
            }
        }
        printf("]\n");
    }
    return 0;
}


