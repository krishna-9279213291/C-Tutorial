// you can also define a macro with "#define" directive. It is similar to a function in C.
// we can pass one or more arguments to the macro name and perform the actions in the code segment.
// The following code defines the actions in the code segment. 
#include <stdio.h>
#define PI 3.14159
#define AREA(r) (PI * r * r)
int main() {
    int radius = 5 ;
    float area = AREA(radius);
    printf("Area: %f" , area);
    return 0;
}
// Macros are generally faster in execution than the functions.
