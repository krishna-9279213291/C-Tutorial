// string input using scanf()
#include <stdio.h>
int main(){
    char name[20];
    printf("enter your name: ");
    scanf("%s",&name);
    printf("You entered your name : %s", name);
    return 0;
}