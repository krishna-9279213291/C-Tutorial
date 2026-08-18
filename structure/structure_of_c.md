C - Program Structure : 
 

A typical program in C language has certain mandatory sections and a few optional sections, depending on the program's logic, complexity, and readability. Normally a C program starts with one or more preprocessor directives (#include statements) and must have a main() function that serves as the entry point of the program. In addition, there may be global declarations of variables and functions, macros, other user-defined functions, etc. 

The Preprocessor Section : 

The c compiler comes with several library files , having ".h"  as an extension. A ".h" file (called a "header file") consists of one or more predefined functions (also called "library functions") to be used in the c program.

The library functions must be loaded in any C program. The "#include" statement is used to include a header file. It is a "preprocessor directive" 

for example , printf() and scanf() fucntions are needed to perform console I/O operations. They are defined in the stdio.h file. Hence, you invarably find #include <stdio.h> statement at the top of any C program. Other important and freqently used header files include string.h , math.h, stdlib.h, etc.

There are other preprocessor directives such as #define which is used to define constants and macros and #ifdef for conditional definitions. 

The following statement defines a constant PI- 

        #define PI 3.14159

The main() Function 

A C program is a collection of one or more functions. there are two types of functions in a C prgram: library functions and user - defined functions. 

There must be at least one user-defined function in a C program, whose name must be main(). The main() function serves as the entry point of the program. when the program is run, the compiler looks for the main() function. 

The main() function contains one or more statemenets . By defualt , each statement must end with a semicolon. The statement may include variable declartions, decicion control or loop constructs or call to a library or another user - defined fucnton. 

In C , a function must have a data type. The data type of return value must match with the data type of the function. By default , a function in C is of int type. Hence, if a function doesnt have a return statement , its type is int, and may omit it in the function definition , but the compiler issues a warning - 

warning : return type defualts to 'int' 

