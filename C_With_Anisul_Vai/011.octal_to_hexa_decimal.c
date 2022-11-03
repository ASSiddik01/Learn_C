#include <stdio.h>
int main()
{
    int n;
    printf("Octal Number = ");
    scanf("%o", &n);
    printf("Octal %o = Hexa-decimal %X \n", n, n);

    return 0;
}