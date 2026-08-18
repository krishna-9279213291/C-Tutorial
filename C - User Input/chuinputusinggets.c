// character input using gets() 
#include <stdio.h>
int main(){
    char ch;
    printf("enter a character:");
    ch = getchar();
    puts("you entered: ");
    putchar(ch);
    printf("\n you entered character: %c", ch);
    return 0;
}