// example : user inputs in c
// going back to the previous example , we shall use the scanf() function 
// to accept the value for "price " and "qty" , instead of assigning them any fixed value.
#include <stdio.h>
int main (){
    int price, qty, ttl;
    printf("enter price and quantity: ");
    scanf("%d %d" , &price, &qty);
    ttl = price * qty;
    printf("Total: %d", ttl);
    return 0;
}
/*
What is more important is that, for another set of values, you don't
need to edit and compile again. Just run the code and the program
again waits for the user input. In this way, the program can be run any number of times with different inputs.
*/ 
