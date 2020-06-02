#include <stdio.h>
#include <stdlib.h>

int main()
{
    char wyraz[]="informatyka";
    char* p= wyraz; // p = 0x60feeb
    int a = sizeof(char); // a = 1
    p = wyraz+5; // p = 0x60fef0  , *p = 'm'
    char w = *wyraz+5; //w='n'  , &w = 0x60fef7
    w= *(wyraz+5); //w = 'm'  , &w = 0x60fef7
    *p = (wyraz+8)[-2]; // p=0x60fef0  , *p='a'
    return 0;
}
