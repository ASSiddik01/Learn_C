#include <stdio.h>
#include <ctype.h>
int main()
{
    char lower, upper;
    printf("Enter a lowercase letter = ");
    scanf("%c", &lower);
    printf("By manual = %c\n", lower - 32);
    // upper = toupper(lower);
    printf("By function = %c\n", toupper(lower));
    return 0;
}