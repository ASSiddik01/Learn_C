#include <stdio.h>

int main()
{
    // One D
    int studentMarkes[4] = {23,12,21,43};
    printf("One-D array %d\n",studentMarkes[2]);

    // Two D
    int studentAge[2][4] = {{23,12,21,14},{24,13,15,16}};
    printf("Two-D array %d\n",studentAge[1][2]);
    return 0;
}
