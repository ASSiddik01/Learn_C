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

> <ol>

<li>Can start with alphabates, underscore</li>
<li>Can containe alphabates, digits and underscore.</li>
<li>Can't start with digits and special charecter</li>
<li>No whitespace and reserved keyword is allowed</li>
</ol>

> Example: <br> Valid methods: int name, int num1, int \_age <br> Invalid methods: int $name, int 1num, int long

### **Data Types**

> <ol>

<li>Basic data :- int, char, float, double</li>
<li>Derived data type:- array, pointer, structure, union</li>
<li>Enumeration data type:- emum</li>
<li>Void data type:- void</li>
</ol>

> Example: <br> Valid methods: int name, int num1, int \_age <br> Invalid methods: int $name, int 1num, int long

### **sizeof - Find the Data Type Size**

```bash
printf("%lu", sizeof(data_types_name));
```

> Example: <br> printf("%lu", sizeof(int));
