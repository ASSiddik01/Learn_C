#include <stdio.h>

int main()
{
    int age;
    printf("Please! enter your age\n");
    scanf("%d", &age);

    if (age>=21)
    {
        printf("You are allowed for marriage\n");
    }
    else if ( age>=18 && age<=19 )
    {
        printf("You are allowed for vote\n");
    }
    else
    {
        printf("You are under 18\n");
    }
    return 0;
}
