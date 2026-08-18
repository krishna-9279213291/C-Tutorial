// Once a constant is defined , it can be used in the rest of the C program. 

#include <stdio.h>
#define PI 3.14159
int main() {
    int radius = 5;
    float area = PI * radius * radius ;
    printf("Area: %f" , area) ;
    return 0;
} 
