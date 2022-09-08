#include <stdio.h>
int main()
{
    // int a = 12;
    // int *ptra = &a;
    // printf("%d\n", a);
    // printf("%p\n", &ptra);
    // printf("%p\n", &ptra + 2);

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("%d\n", arr[1]);
    printf("%p\n", &arr + 1);
    printf("%p\n", &arr[1]);
    return 0;
}