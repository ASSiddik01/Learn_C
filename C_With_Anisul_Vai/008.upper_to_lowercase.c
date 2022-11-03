#include <stdio.h>
#include <ctype.h>
int main()
{
    char upper;
    printf("Enter a uppercase letter = ");
    scanf("%c", &upper);
    printf("By manual = %c\n", upper + 32);
    printf("By function = %c\n", tolower(upper));
    return 0;
}