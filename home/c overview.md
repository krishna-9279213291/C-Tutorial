C Language - Overview :

C is a general−purpose, high−level language that was originally developed by Dennis M. Ritchie to develop the UNIX operating system at Bell Labs. C was originally first implemented on the DEC PDP-11 computer in 1972.

In 1978, Brian Kernighan and Dennis Ritchie produced the first publicly available description of C, now known as the K&R standard.

The UNIX operating system, the C compiler, and essentially all UNIX application programs have been written in C. C has now become a widely used professional language for various reasons −

- Easy to learn
- Structured language
- It produces efficient programs
- It can handle low−level activities
- It can be compiled on a variety of computer platforms 

Facts about C : 

- C was invented to write an operating system called UNIX.

- C is a successor of B language which was introduced around the early 1970s.

- The language was formalized in 1988 by the American National Standard Institute (ANSI).

- The UNIX OS was totally written in C.

- Today C is the most widely used and popular System Programming Language.

- Most of the state-of-the-art software have been implemented using C.

- Today's most popular Linux OS and RDBMS MySQL have been written in C.

Why Use C Language? :

C was initially used for system development work, particularly the programs that make-up the operating system. C was adopted as a system development language because it produces code that runs nearly as fast as the code written in assembly language.

Some examples of the use of C might be −

- Operating Systems
- Language Compilers
- Assemblers
- Text Editors
- Print Spoolers
- Network Drivers
- Modern Programs
- Databases
- Language Interpreters
- Utilities

C covers all the basic concepts of programming. It's a base or mother programming language to learn object−oriented programming like C++, Java, .Net, etc. Many modern programming languages such as C++, Java, and Python have borrowed syntax and concepts from C.

It provides fine-grained control over hardware, making it highly efficient. As a result, C is commonly used to develop system−level programs, like designing Operating Systems, OS kernels, etc., and also used to develop applications like Text Editors, Compilers, Network Drivers, etc.

C programs are portable; hence they can run on different platforms without significant modifications.

C has played a pivotal role as a fundamental programming language over the course of programming history. However, its popularity for application development has somewhat diminished in comparison to more contemporary languages. This may be attributed to its low−level characteristics and the existence of higher−level languages that offer a greater abundance of pre−existing abstractions and capabilities. Nevertheless, the use of the programming language C remains indispensable in domains where factors such as optimal performance, meticulous management of system resources, and the imperative need for portability hold utmost significance.

Advantages of C Language : 
The following are the advantages of C language −

- Efficiency and speed − C is known for being high−performing and efficient. It can let you work with memory at a low level, as well as allow direct access to hardware, making it ideal for applications requiring speed and economical resource use.

- Portable − C programs can be compiled and executed on different platforms with minimal or no modifications. This portability is due to the fact that the language has been standardized and compilers are available for use on various operating systems globally.

- Close to Hardware − C allows direct manipulation of hardware through the use of pointers and low−level operations. This makes it suitable for system programming and developing applications that require fine-grained control over hardware resources.

- Standard Libraries − For common tasks such as input/output operations, string manipulation, and mathematical computations, C comes with a large standard library which helps developers write code more efficiently by leveraging pre−built functions.

- Structured Programming − C helps to organize code into modular and easy−to−understand structures. With functions, loops, and conditionals, developers can produce clear code that is easy to maintain.

- Procedural Language − C follows a procedural paradigm that is often simpler and more straightforward for some types of programming tasks.

- Versatility − C language is a versatile programming language and it can be used for various types of software such as system applications, compilers, firmware, application software, etc.

Drawbacks of C Language :

The following are the disadvantages/drawbacks of C language −

- Manual Memory Management − C languages need manual memory management, where a developer has to take care of allocating and deallocating memory explicitly.

- No Object−Oriented Feature − Nowadays, most of the programming languages support the OOPs features. But C language does not support it.

- No Garbage Collection − C language does not support the concept of Garbage collection. A developer needs to allocate and deallocate memory manually and this can be error-prone and lead to memory leaks or inefficient memory usage.

- No Exception Handling − C language does not provide any library for handling exceptions. A developer needs to write code to handle all types of expectations.

Applications of C Language :

The following are the applications of C language −

- System Programming − C language is used to develop system software which are close to hardware such as operating systems, firmware, language translators, etc.

- Embedded Systems − C language is used in embedded system programming for a wide range of devices such as microcontrollers, industrial controllers, etc.

- Compiler and Interpreters − C language is very common to develop language compilers and interpreters.

- Database Systems − Since C language is efficient and fast for low-level memory manipulation. It is used for developing DBMS and RDBMS engines.

- Networking Software − C language is used to develop networking software such as protocols, routers, and network utilities.

- Game Development − C language is widely used for developing games, gaming applications, and game engines.

- Scientific and Mathematical Applications − C language is efficient in developing applications where scientific computing is required. Applications such as simulations, numerical analysis, and other scientific computations are usually developed in C language.

- Text Editor and IDEs − C language is used for developing text editors and integrated development environments such as Vim and Emacs.

Getting started with C programming :
 
 To learn C effectively , we need to understand its structutre first. Every prorgamming language has its programming structure. A typical structure of a C program includes several parts. The following steps show the C structre of a regular C prgram-
 
 Include Header Files
Include necessary header files that contain declarations of functions, constants, and macros that can be used in one or more source code files. Some popular header files are as −

stdio.h − Provides input and output functions like printf and scanf.

#include <stdio.h>
stdlib.h − Contains functions involving memory allocation, rand function, and other utility functions.

#include <stdlib.h>
math.h − Includes mathematical functions like sqrt, sin, cos, etc.

#include <math.h>
string.h − Includes functions for manipulating strings, such as strcpy, strlen, etc.

#include <string.h>
ctype.h − Functions for testing and mapping characters, like isalpha, isdigit, etc.

#include <ctype.h>
stdbool.h − Defines the boolean data type and values true and false.

#include <stdbool.h>
time.h − Contains functions for working with date and time.

#include <time.h>
limits.h − Defines various implementation-specific limits on integer types.

#include <limits.h>
Macros and Constants
Define any macros or constants that will be used throughout the program. Macros and constants are optional.

Example
#include <stdio.h>
#define PI 3.14159
int main() {
   float radius = 5.0;
   float area = PI * radius * radius;

   printf("Area of the circle: %f\n", area);
   return 0;
}
Output
Area of the circle: 78.539749
Global Declarations in C
Global declarations are optional:

int globalVariable;
void sampleFunction();
Declare global variables and functions that will be used across different parts of the program. Take a look at the following example −

#include <stdio.h>

// Global variable declaration
int globalVariable;

int main() 
{
   // Rest of the program
   return 0;
}
Main Function
Every C program must have a main function. It is the entry point of the program. Take a look at the following example −

int main() {
   float radius = 5.0;
   float area = PI * radius * radius;

   printf("Area of the circle: %f\n", area);
   return 0;
}
Functions in C
Define other functions as needed. The main function may call these functions. Take a look at the following example:

#include <stdio.h>

// Global function declaration
void samplefunction();

int main() {
   // Programming statements
   return 0;
}

// Global function definition
void samplefunction () {
   // Function programming statements implementation
}
A C program can vary from 3 lines to millions of lines and it should be written into one or more text files with extension ".c"; for example, hello.c. You can use "vi", "vim" or any other text editor to write your C program into a file.

This tutorial assumes that you know how to edit a text file and how to write source code inside a program file.