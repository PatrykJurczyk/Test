#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int foo(struct element *lista1, struct element *lista2)
{
    int wynik1 = 1;
    int wynik2 = 1;
    struct element*wsk1 = lista1;
    struct element*wsk2 = lista2;
    while(wsk1!=NULL && wsk2!=NULL)
    {
        wynik1*=wsk1->x;
        wynik2*=wsk2->x;
        wsk1=wsk1->next;
        wsk2=wsk2->next;
    }
    if(wynik1==wynik2)
    {
        return 1;
    }
    return 0;

};

int main()
{
    struct element *lista = malloc(sizeof(struct element));
    lista->x=3;
    lista->next = malloc(sizeof(struct element));
    lista ->next->x=4;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->x=2;
    lista->next->next->next=NULL;
    struct element *lista1 = malloc(sizeof(struct element));
    lista1->x=3;
    lista1->next = malloc(sizeof(struct element));
    lista1 ->next->x=4;
    lista1->next->next = malloc(sizeof(struct element));
    lista1->next->next->x=2;
    lista1->next->next->next=NULL;
    printf("%d",foo(lista,lista1));
    return 0;
}
