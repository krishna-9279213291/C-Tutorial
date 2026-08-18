/*
The %c format specifier reads a single character from the keyboard.
However, we must give a blank space before %c in the format string.
This is because the %c conversion specifier won't automatically skip any leading whitespaces.
If there is a stray newline in the input stream (from a previous entry, for example) the scanf() call will consume it immediately.

        scanf(" %c", &c);

*/

#include <stdio.h>
int main(){
    char ch;
printf("Enter a single character: ");
scanf("%c" , &ch);
printf("you entered character : %c" , ch);
return 0;
}