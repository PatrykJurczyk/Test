#include <stdio.h>
#include <stdlib.h>

int dlugosc(char nap[])
{
    int i = 0;
    while(nap[i]!=0)
    {
        i++;
    }
    return i;
}


void foo(char nap1[], char nap2[], char nap3[])
{
    int n = dlugosc(nap3);
    int i=0;
    for(i=0; i<dlugosc(nap2); i++)
    {
        nap3[n+i]=nap2[i];
    }
    nap3[n+i] = 0;
    i=0;
    int m=dlugosc(nap2);
    for(i=0; i<dlugosc(nap1); i++)
    {
        nap2[m+i] = nap1[i];
    }
    nap2[m+i] = 0;
}


int main()
{
    char t[30] = "abc ";
    char t1[30] = "def ";
    char t2[30] = "gfi ";
    foo(t,t1,t2);
    printf("%s\n",t);
    printf("%s\n",t1);
    printf("%s\n",t2);
    return 0;
}
