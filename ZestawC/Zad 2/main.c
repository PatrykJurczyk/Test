#include <stdio.h>
#include <stdlib.h>

enum roslina
{
    stokrotka, brzoza, swierk, dab, klon
};

int main()
{
    enum roslina z = brzoza;
    printf("%i\n",z);
    return 0;
}
