#include <stdio.h>
#include <stdlib.h>

struct planeta
{
    int numer;
    char nazwa[50];
    float promien;
};

struct planeta foo(struct planeta tab[], int n)
{
    float wynik_v = 4/3*3.14*tab[0].promien*tab[0].promien*tab[0].promien;
    struct planeta wynik_planeta = tab[0];
    for(int i = 0; i < n; i++){
        struct planeta p = tab[i];
        float v = 4/3*3.14*p.promien*p.promien*p.promien;
        if(v > wynik_v){
            wynik_v = v;
            wynik_planeta = p;
        }
    }
    return wynik_planeta;
};


int main()
{
    struct planeta planety[3];
    int n = 3;
    struct planeta p1;
    p1.numer = 1;
    strcpy(p1.nazwa, "Ziemia");
    p1.promien = 3.2;
    planety[0] = p1;
    struct planeta p2;
    p2.numer = 2;
    strcpy(p2.nazwa, "Mars");
    p2.promien = 5.5;
    planety[1] = p2;
    struct planeta p3;
    p3.numer = 3;
    strcpy(p3.nazwa, "Jowisz");
    p3.promien = 4.6;
    planety[2] = p3;
    struct planeta wynik = foo(planety, n);
    printf("Numer: %d\n", wynik.numer);
    printf("Nazwa: %s\n", wynik.nazwa);
    printf("Promien: %lf\n", wynik.promien);
    return 0;
}
