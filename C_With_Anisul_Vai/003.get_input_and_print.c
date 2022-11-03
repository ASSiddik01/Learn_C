#include <stdio.h>
int main()
{
    int num1;
    float num2;
    double num3;
    char name;
    printf("Please enter first letter of your name = ");
    scanf("%c", &name);
    printf("Please enter your age = ");
    scanf("%d", &num1);
    printf("Please enter height = ");
    scanf("%f", &num2);
    printf("Please enter your favourite decimal number = ");
    scanf("%lf", &num3);
    printf("Your name start with %c\nAge %d\nHeight %f\nFavourite decimal is %lf\n", name, num1, num2, num3);
    return 0;
}