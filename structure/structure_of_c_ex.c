// structure of the c program
// The following code shows the different sections in a c program -
#include <stdio.h> // headers
#include <math.h> // headers
// forward declaration
float area_of_square(float);
// main function
int main(){
    float side = 5.50;
    float area = area_of_square(side);
    printf("side=%5.2f Area = %5.2f" , side , area);
    return 0;
}
// subroutine 
float area_of_square(float side){
    float area = pow(side, 2);
    return area ;
}