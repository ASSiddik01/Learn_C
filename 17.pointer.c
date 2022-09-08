#include <stdio.h>

int main()
{
    int a = 12;
    int *ptra = &a;

    printf("The value of a is %d\n", a);
    printf("The value of ptra is %d\n", *ptra);
    printf("The address of a is %p\n", ptra);
    printf("The address of ptra is %p\n", &ptra);
    return 0;
}
