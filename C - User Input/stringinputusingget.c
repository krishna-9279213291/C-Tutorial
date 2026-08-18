// string input using gets()
#include <stdio.h>
#include <stdlib.h>
int main (){
    char name[20];
    printf("enter your name: ");
    gets(name);
    printf("You entered your name: %s", name);
    return 0;
}