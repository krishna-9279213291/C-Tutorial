// to understand the need for user input , consder the following c program -

#include <stdio.h>
int main() {
    int price , qty ,ttl;
    price = 100;
    qty = 100 ;
    ttl = price * qty ;
    printf("total: %d" , ttl);
    return 0;
}
/*
For another transaction with different values of price and quantity, you
need to edit the program, put the values, then compile and run again.
To do this every time is a tedious activity. Instead, there must be a
provision to assign values to a variable after the program is run. The
scanf() function reads the user input during the runtime, and assigns the value to a variable.
*/

