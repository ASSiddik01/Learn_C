<hr><hr>

## **_C - Mother of all programming Language_**

<hr><hr>

> ===== Note: All underscre ( \_ ) sectence will replace by yours without only type =====

<hr>

### **_AniSul Islam_**

<hr>

### **Comment and Escap Sequance**

```bash

// This program show my name
#include <stdio.h>
int main()
{
    /*
    Multiple
    line
    comment
    */
    printf("My name Shama\n");
    printf("BRUR");
    return 0;
}

```

<hr>
<hr>

<hr>

### **_Code with Harry_**

<hr>

### **Basic Structure**

```bash

#include <stdio.h>

int main()
{
    printf("hello World");
    return 0;
}

```

### **Printf - Print the output**

```bash
printf("Enter number a");
```

### **Scanf - Get the input from user**

```bash
scanf("%d", &a);
```

> Here, %d is the referance of &a and &a to assign the value in "a" variable

### **Program Compile**

```bash
gcc file_name -o program_name
```

> Example: <br> gcc 01.add.c -o getInput

### **Run Compiled File name**

```bash
./compiled_file_name
```

> Example: <br> ./a.out

### **Rules for variable define**

> <ol><li>Can start with alphabates, underscore</li><li>Can containe alphabates, digits and underscore.</li><li>Can't start with digits and special charecter</li><li>No whitespace and reserved keyword is allowed</li></ol>

> Example: <br> Valid methods: int name, int num1, int \_age <br> Invalid methods: int $name, int 1num, int long

### **Data Types**

> <ol><li>Basic data :- int, char, float, double</li><li>Derived data type:- array, pointer, structure, union</li><li>Enumeration data type:- emum</li><li>Void data type:- void</li></ol>

> Example: <br> Valid methods: int name, int num1, int \_age <br> Invalid methods: int $name, int 1num, int long

### **sizeof - Find the Data Type Size**

```bash
printf("%lu", sizeof(data_types_name));
```

> Example: <br> printf("%lu", sizeof(int));

### **Operator Types**

> <ol><li>Arithmatic operator:- +, -, *, /, % </li><li>Relational Operator:- ==, !=, >, <, >=, <=</li><li>Logical Operator:- &&, ||, !</li><li>Bitwise Opertor:- &, |, ^, ~, <<, >> </li><li>Assignment Operator:- =, +=, -=, *=, /=</li><li>Miscellaneous Operator:- sizeof(), &, *, ?:</li></ol>

### **specifier**

> <ol><li>%c - refers the character</li><li>%d - refers the integer</li><li>%f - refers the float</li><li>%l - refers the long</li><li>%lf - refers the double</li><li>%LF - refers the long double</li></ol>

```bash
#include <stdio.h>

int main()
{
    int a = 4;
    char myName = 'M';
    double num = 23;
    float b = 3.4413112;

    printf("This is an integer %d \n", a);
    printf("This is an char %C \n", myName);
    printf("This is an double %lf \n", num);
    printf("This is an float %f \n", b);
    printf("This is an float with specified decimal %.2f \n", b);
    return 0;
}
```

### **Constant Define**

Two ways to define constant. One is const keyword other is define keyword. Remember that define use as a preprocessor

```bash
const
```

```bash
#define
```

> Example:- <br> const int a = 4; <br> #define n 6

### **Escape Sequances**

> <ol><li>\a - alarm or beep</li><li>\b - backspace</li><li>\f - form feed</li><li>\n - new line</li><li>\r - carriage return</li><li>\t - tab</li><li>\v - vertical tab</li><li>\\ - backslash</li><li>\' - single quate</li><li>\" - double quate</li><li>\? - question mark</li><li>\nnn - Octal number</li><li>\xhh - hexadecimal number</li><li>\0 - null</li></ol>

### **If Else Statments**

It is used to perform operation based on some condition
<br>
Types of if statements

<ol>
<li>if statement</li>

```bash
if(condition){
    printf("output");
}
```

<li>if else statement</li>

```bash
if(condition){
    printf("output");
}else{
    printf("output");
}
```

<li>if else if statement</li>

```bash
if(condition){
    printf("output");
}else if(condition){
    printf("output");
}else{
    printf("output");
}
```

<li>nested if statement</li>
</ol>

### **Switch Case Rulse**

<ol><li>Switch comparision must be an int or char</li><li>Case value must be an int or char</li><li>Case must be come inside switch</li><li>Break not must but best practice</li></ol>

```bash
switch (expression)
    {
    case /* constant-expression */:
        /* code */
        break;

    default:
        break;
    }
```

### **Loops**

Advantages of loops

<ol><li>Code Reusability</li><li>Saves times</li><li>Traversing</li></ol>

Types of loops

<ol><li>Do while loop</li><li>while loop</li><li>for loop</li></ol>

### do while

```bash
#include <stdio.h>

int main()
{
    int i = 0;
    do
    {
        printf("%d\n",i);
        i += 1;
    } while (i < 10);



    return 0;
}
```

### while

```bash
#include <stdio.h>

int main()
{
    int i = 0;
    while (/* condition */)
    {
        /* code */
    }

    return 0;
}

```

### for

```bash
#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}

```

### **Break Statement**

Break condition stop the code when meet the condition and continue condition skip the code when condition meet

```bash
#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        // if (i>=7)
        // {
        //     break;
        // }

        if (i<5)
        {
            continue;
        }
        printf("%d",i);

    }

    return 0;
}

```

### **Goto Statement**

Goto means jump the code

```bash
#include <stdio.h>

int main()
{
    printf("Hello World\n");

    goto end;
    printf("Welcome to Asia\n");

    end:
    printf("Welcome to Bangladesh\n");
    return 0;
}

```

### **Typecasting**

Typecasting a type convertion method in C. Typecasting syntex is below:-

```bash
(type) value

```

> Example:

```bash
#include <stdio.h>

int main()
{
    int a = 5;
    float b = 34.66;
    printf("The value is %d\n", (int) b);
    return 0;
}

```

### **Function**

<ul><li>Function are make a large program into small pices</li><li>Function make for code reuseable</li></ul>

```bash
rerutn_type function_name(data_parameter,......){
    code_that_you_executed
}
```

> Example:

```bash
int sum(int a, int b){
    printf("%d", a + b);
}
```

Types of Function

<ol><li>Library function - function included in C header files</li><li>User defined function - function created by programmers</li></ol>

### **Recursion**

Recursion or recursive function which calls itself

```bash
int factorial(int num){
    if (num == 1 || num == 0){
        return 1;
    }
    else
    {
        return (num * factorial(num - 1));
    }
}
```

### **Array**

<ol><li>Array is the same type data collection</li><li>Data items are stored as contiguous memory location</li><li>Array make code more readable and organized</li><li>Array data accressing very fast</li><li>Array data access by index nubmer - Index number is start with 0</li></ol>

One-D array syntex

```bash
data_type array_name[data_size] = {data_collection}
```

> Example:

```bash
    int studentMarkes[4] = {23,12,21,43};
    printf("One-D array %d\n",studentMarkes[2]);
```

Two-D array syntex

```bash
data_type array_name[rows][columns] = {{data_collection},{data_collection}}
```

> Example:

```bash
    int studentAge[2][4] = {{23,12,21,14},{24,13,15,16}};
    printf("Two-D array %d\n",studentAge[1][2]);
```

### **Pointer**

<ol><li>Pointer is a variable which store another variable address</li><li>Pointer declared * (asterisk) sign</li><li>P points to a means - p store a variable memory address</li><li>int *pointer_name = &variable_name</li><li>& - return the address of a variable and * - de-reference/indirection operator used to get the value at a given address</li></ol>

Uses of Pointer

<ol><li>Dynamic memory allocation</li><li>Return multiple value form a function</li><li>Pointer reduces the code and improves the performances</li></ol>

```bash
#include <stdio.h>

int main()
{
    int a = 12;
    int *ptra = &a;

    printf("The value of a is %d\n", a);
    printf("The value of ptra is %d\n", *ptra);
    printf("The address of a is %p\n", ptra);
    printf("The address of ptra is %p\n", &ptra);
    return 0;
}

```

### **Types of Function Call in C Programming**

<ol><li>Call by Value</li><li>Call by Refereneces</li></ol>

### 1. Call by Value

Call by value means actual parameters. Which is passed as a arguments when call a function.

### 2. Call by Reference

Call by references means formal parameters. Which is variable memory address passed as a arguments

```bash
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
```

### **String Data Types in C**

String is a character array.

<ol><li>String data types in not supported in C</li><li>String is a array of characters terminated by NULL character</li><li></li></ol>

```bash
#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin); // read string
    printf("Name: ");
    puts(name); // display string
    return 0;
}
```
