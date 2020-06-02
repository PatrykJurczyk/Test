#include <stdio.h>
#include <stdlib.h>

struct Trapez
{
    int a,b,c,d;
};

int foo(struct Trapez bok)
{
    int suma=bok.a+bok.b+bok.c+bok.d;
    return suma;
}

int main()
{
    struct Trapez zm1;
    zm1.a = 8;
    zm1.b = 1;
    zm1.c = 4;
    zm1.d = 3;
    printf("%d\n",foo(zm1));
    return 0;
}
