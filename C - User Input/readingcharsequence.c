// in this program we can see that how we can read a series of character till the user presses the enter key-
#include <stdio.h>
int main(){
    char ch;
    char word[10];
    int i = 0;
    printf("Enter character. End by pressing the enter key: ");
    while (1)
    {
        ch = getchar();
        word[i] = ch;
        if (ch == '\n')
        break;
        i++ ;

    }
    printf("\n You entered the word : %s",word);
    return 0;
    
}