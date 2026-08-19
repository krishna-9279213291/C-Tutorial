// example :
// in this example , the program ask the user to inout age and percent values . they are stored in the int and float variables , respectively.

#include <stdio.h>
int main (){
    int age ; float percent;
    printf(" Enter your age nand percent: ");
    scanf("%d %f", &age,&percent);
    printf("you enter your age is : %d and percent is : %f ", age , percent);
    return 0;
}