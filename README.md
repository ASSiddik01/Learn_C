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

### **Programe Compile**

```bash
gcc file_name -o programe_name
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
