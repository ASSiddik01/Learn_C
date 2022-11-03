#include <stdio.h>

int fibo(int num)
{
    for (int i = 0; i <= num; i++)
    {
        if (num == 1 || num == 2)
        {
            return num;
        }
        else
        {
            return fibo(num - 1) + fibo(num - 2);
        }
    }
}

int main()
{
    int num;
    printf("Enter the that you want to fibonacci\n");
    scanf("%d", &num);

    printf("The fibonacci of %dth number is %d\n", num, fibo(num));
    return 0;
}
