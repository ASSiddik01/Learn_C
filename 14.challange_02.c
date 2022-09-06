#include <stdio.h>
// km to mile
// int kmToMile(int km){
//     float mile = 0.621;
//     printf("%d km = %.4f miles\n", km, mile * km);
// }


// inches to feet
// int inchToFeet(int inch){
//     float feet = 0.083333;
//     printf("%d inches = %.4f feet\n", inch, feet * inch);
// }


// cm to inch
int cmToInch(int cm){
    float inch = 0.394;
    printf("%d cms = %.4f inchs\n", cm, inch * cm);
}

int main()
{
    // km to mile
    // int km;
    // printf("Please give your km to convert miles\n");
    // scanf("%d", &km);
    // kmToMile(km);



    // inches to feet
    // int inch;
    // printf("Please give your inch to convert feet\n");
    // scanf("%d", &inch);
    // inchToFeet(inch);




    // cm to inch
    int cm;
    printf("Please give your cms to convert inches\n");
    scanf("%d", &cm);
    cmToInch(cm);




    return 0;
}
