Getting Started with C Programming : 

To learn C effectively, we need to understand its structure first. Every programming language has its programming structure. A typical structure of a C program includes several parts. The following steps show the C structure of a regular C program−

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

Example :

#include <stdio.h>
#define PI 3.14159
int main() {
   float radius = 5.0;
   float area = PI * radius * radius;

   printf("Area of the circle: %f\n", area);
   return 0;
}
Output : 
Area of the circle: 78.539749

Global Declarations in C : 

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