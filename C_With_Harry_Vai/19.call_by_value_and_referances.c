#include <stdio.h>

int callByValue(int num)
{
    return num;
}

void callByReferences(int *num)
{
    *num = 5634;
}

int main()
{
    int a = 34;
    // call by value
    printf("The value of a is %d\n", callByValue(a));
    // call by referances
    callByReferences(&a);
    printf("The value of a is %d\n", callByValue(a));

    return 0;
}