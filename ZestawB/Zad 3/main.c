#include <stdio.h>
#include <stdlib.h>

struct element
{
    double x;
    struct element * next;
};

int porownaj(struct element *Lista1, struct element *Lista2)
{
    struct element*wsk1 = Lista1->next;
    struct element*wsk2 = Lista2->next;
    while(wsk1!=NULL && wsk2!=NULL)
    {
        if(wsk1->x != wsk2->x)
        {
            return 0;
        }
        wsk1 = wsk1 -> next;
        wsk2 = wsk2 -> next;
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
    struct element *lista2 = malloc(sizeof(struct element));
    lista1->next = malloc(sizeof(struct element));
    lista2->next = malloc(sizeof(struct element));
    lista1->next->x=3;
    lista1->next->next = malloc(sizeof(struct element));
    lista1->next->next->x=7;
    lista1->next->next->next=NULL;
    lista2->next->x=3;
    lista2->next->next = malloc(sizeof(struct element));
    lista2->next->next->x=4;
    lista2->next->next->next=NULL;
    printf("%d",porownaj(lista1,lista2));
    return 0;
}
