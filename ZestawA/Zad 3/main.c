#include <stdio.h>
#include <stdlib.h>

struct element {
    char x;
    struct element * next;
};

int foo(struct element *lista1, struct element *lista2)
{
    struct element*wsk1 = lista1 ->next;
    struct element*wsk2 = lista2 ->next;
    while(wsk1!=NULL && wsk2!=NULL)
    {
        if(wsk1->x != wsk2->x)
        {
            return 0;
        }
        wsk1=wsk1->next;
        wsk2=wsk2->next;
    }
    if(wsk1!=NULL)
    {
        return 0;
    }
    if(wsk2!=NULL)
    {
        return 0;
    }
    return 1;
};

int main()
{
    struct element *lista1 = malloc(sizeof(struct element));
    lista1->next = malloc(sizeof(struct element));
    lista1->next->x="a";
    lista1->next->next = malloc(sizeof(struct element));
    lista1->next->next->x="b";
    lista1->next->next->next=NULL;
    struct element *lista2 = malloc(sizeof(struct element));
    lista2->next = malloc(sizeof(struct element));
    lista2->next->x="a";
    lista2->next->next = malloc(sizeof(struct element));
    lista2->next->next->x="c";
    lista2->next->next->next=NULL;
    printf("%d",foo(lista1,lista2));
    return 0;
}
