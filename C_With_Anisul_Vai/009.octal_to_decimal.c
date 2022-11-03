#include <stdio.h>
int main()
{
    int n;
    printf("Octal Number = ");
    scanf("%o", &n);
    printf("Octal %o = decimal %d \n", n, n);

    return 0;
}