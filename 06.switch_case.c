#include <stdio.h>

int main()
{
    int age;
    printf("Please! enter your age\n");
    scanf("%d", &age);

    switch (age)
    {
    case 21:
        printf("You are allowed for marriage\n");
        break;
    
    case 18:
        printf("You are allowed for vote\n");
        break;
    
    default:
    printf("You are under 18\n");
        break;
    }

    
    return 0;
}
