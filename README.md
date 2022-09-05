<hr><hr>

## **_C - Mother of all programming Language_**

<hr><hr>

> ===== Note: All underscre ( \_ ) sectence will replace by yours without only type =====

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
