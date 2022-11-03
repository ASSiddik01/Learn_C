#include <stdio.h>

int function1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d  is %d f1\n", i, array[i]);
    }
}

int function2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d  is %d f2\n", i, *(ptr + i));
    }
    *(ptr + 2) = 2344;
}

int main()
{
    int array[] = {12, 23, 34, 45};
    function1(array);
    function2(array);
    function2(array);
    return 0;
}