# Learning C Language

## C language was developed by **Dennis Ritchie** in the year 1972 at bell labs

C is primarily a Procedural language

It blends the combination of low-level Language and High-Level Language. And C is called Middle level language

**MinGW GNU gcc , gcc++ compiler i have installed for C**

**include<stdio.h>  It is a preprocessor directive**

Boilerplate code it is the bare minimum standard code that is required almost in every C program

Variables is a container which stores a value

Datatypes:

- Integer  1,2,6,7
- float 3.2,7.0
- Character  'zee','$'

C is the fast language to adopt its culture very fast, and its a very prominent language among Python, Java.
Latency is very important in Programming language.

**Data type defines what kind of data**

**Variable is where that data is stored**

Basic Datatypes supported in C;
Three types of Data-Types
 - Primitive datatypes (int, float, char, void, double)
 - Derived Data types (array, pointers, function)
 - User Defined Data types (Enum, Structure, union)

printf() It is used to display the inserted data on the console after running the program.
scanf() reads input from standard input (keyboard) and stores it into variables,

 - %d → format specifier for integer
 - &age → address of variable age 
- scanf() stores the entered value into age

**Why & (ampersand) is used? (in scanf)
scanf() needs the memory address of the variable
& gives the address of a variable**

Common Format Specifiers
**DataType	   Format**
- int	         %d
- float	         %f
- double	     %lf
- char	         %c
- string	     %s

void is used when a function does not return any value; it only performs an operation.

A pointer* in C is a variable that stores the memory address of another variable.

= is the assignment operator (assigns a value). 
== is the equality operator (compares two values).




1. What is C programming language?
C is a mid-level, structured, procedural programming language developed by Dennis Ritchie at AT&T Bell Labs in 1972.  It combines the features of high-level languages with low-level memory manipulation, making it efficient and portable. 

2. What are the key features of C?

Portability: Programs can run on different machines with minimal changes.
Efficiency and Speed: C code compiles directly into machine code.
Structured Language: Breaks programs into functions for better organization.
Rich Library Functions: Offers built-in functions for input/output, string handling, etc.
Pointers: Enables direct memory manipulation and efficient data handling.
Extensible: Allows users to define new functions and data types. 

3. What is the difference between malloc() and calloc()?
malloc() allocates memory but does not initialize it (contains garbage values). 
calloc() allocates memory and initializes all bytes to zero. 
calloc() takes two arguments: number of elements and size per element. 

4. What is a pointer in C?
A pointer is a variable that stores the memory address of another variable.  It is used for dynamic memory allocation, passing arguments by reference, and efficient array handling. 

5. What are the basic data types in C?

int – for integers
float – for single-precision floating-point numbers
double – for double-precision floating-point numbers
char – for single characters
void – represents no value (used in function return types) 
6. What is the difference between == and =?

= is the assignment operator (assigns a value). 
== is the equality operator (compares two values).
7. What is the use of printf() and scanf()?

printf() outputs data to the console.
scanf() reads input from the user (keyboard).
Example: printf("Hello"); and scanf("%d", &num); 

8. What is a variable?
A variable is a named memory location used to store data that can be changed during program execution. 

9. What is the difference between local and global variables?

Local variables are declared inside a function and are accessible only within that function. 
Global variables are declared outside all functions and are accessible throughout the program. 

10. What is the role of main() function?
The main() function is the entry point of every C program.  Execution starts from here. It returns an integer value to the operating system. 

11. What is the difference between break and continue?

break exits the loop immediately.
continue skips the current iteration and continues with the next. 

12. What is a token in C?
Tokens are the smallest individual elements of a C program.  Types include:
Keywords (e.g., int, if)
Identifiers (e.g., variable names)
Constants (e.g., 10, 'A')
Operators (e.g., +, ==)
Special characters (e.g., {, ;) 

13. What is the difference between while and do-while loop?

while checks the condition before executing the loop body. 
do-while executes the loop body at least once, then checks the condition.

14. What is a function in C?
A function is a block of code that performs a specific task.  It helps in code reusability and modular programming.

15. What is recursion?
Recursion is a technique where a function calls itself to solve a problem.  It is commonly used in algorithms like factorial, Fibonacci, and tree traversals. 

16. What is the output of the following code?

#include <stdio.h>
int main() {
    int a = 5;
    printf("%d", a++);
    return 0;
}
Output: 5 (Post-increment: prints value first, then increments) 

17. What is the size of int, float, and double in C?

int: Usually 4 bytes
float: 4 bytes
double: 8 bytes
(Note: Size may vary depending on the system and compiler) 

18. What is a static variable?
A static variable retains its value between function calls.  It is initialized only once and exists for the lifetime of the program. 

19. What is the difference between ++i and i++?

++i is pre-increment – increments first, then returns the value. 
i++ is post-increment – returns value first, then increments. 

20. What is the output of the following code?
#include <stdio.h>
int main() {
    int x = 10;
    int *ptr = &x;
    printf("%d", *ptr);
    return 0;
}
Output: 10 (prints the value stored at the address pointed by ptr)