C - Constants :

A constant in C is a user-assigned name to a location in the memory, whose value cannot be modified once declared. This is in contrast to a variable in C, which is also a named memory location, however whose value may be changed during the course of the code.

Instead of repeatedly using hard-coded values in a program, it is advised to define a constant and use it. Constants in a C program are usually employed to refer to a value which may be error-prone if it is to be used repetitively in the program, at the same time its value is not likely to change.

For example, the value of mathematical constant PI is a high-precision floating point number 3.14159265359, and if it is likely to appear frequently, it is declared as a constant and used by its name.

We may consider a constant in C as a read-only variable, as its value can only be used subsequently but cannot be modified.

You can declare a constant in C program with either of the following two ways −

Using the const Keyword

Using the #define Directive

Let's understand these two ways of declaring a constant in C.

Defining a Constant Using the const Keyword
The syntax of declaring a constant is as follows −

                    const type NAME = val;
                    For example,

                    const float PI = 3.14159265359;
                    We can now use PI in any expression, as we would use any variable.

Example : -
Take a look at the following example −

                    #include <stdio.h>

                    int main(){
                    const float PI = 3.14159265359;
                    float radius = 5;
                    float area = PI*radius*radius;
                    printf ("area: %f", area);
                    return 0;
                    }
Output : - 
On running this code, you will get following output −

                            area: 78.539818
However, changing the value of a constant is prohibited. The following statement gives a compiler error −

                            const float PI = 3.14159265359;
                            PI=22/7;
Here, you will get the following error message −

error: assignment of read-only variable 'PI'
In case of variables, you can declare a variable and assign it a value later on in the program, however you cannot follow the same process in case of a constant.

You can declare a constant in C without assigning it a value. But when you try to assign it a value afterwords, then the compiler will throw an error.

                    const float PI;
                    PI = 3.14159265359;
Here, you will get this error message −

error: assignment of read-only variable 'PI'
Note: "sizeof" returns "size_t". The type of unsigned integer of "size_t" can vary depending on platform. And, it may not be long unsigned int everywhere. In such cases, we use "%zu" for the format string instead of "%d".

This is because the compiler assigns a random garbage value at the time of declaration, which you cannot change afterwards. Hence, you must declare and initialize the constant at once.

A constant in C can be of any of the data types including primary data types such as int, float, char, and derived data types such as struct.

Defining a Constant Using the #define Directive
Using the #define preprocessor directive is also an effective method to define a constant. Here is its syntax −

                    #define name = value
                    Take a look at the following example:

                    #define PI = 3.14159265359
Although the constant so defined can also be used in any expression (just as the one with the const keyword), there is a difference between the two.

The constants created by the #define directive are not handled by the compiler. Instead, they behave as macros, whose values are substituted at the runtime.

The other notable difference is that you need not mention the data type of the value to be assigned to the constant when using the #define directive.

Example: Define a Constant Using the #define
Given below is another example of a constant defined using the #define directive −

                        #include <stdio.h>
                        #define LENGTH 10   
                        #define WIDTH  5
                        #define NEWLINE '\n'

                        int main() {
                        int area;  
                        area = LENGTH * WIDTH;
                        printf("length: %d width: %d", LENGTH, WIDTH);
                        printf("%c", NEWLINE);
                        printf("value of area : %d", area);
                        return 0;
                        }
Output
Upon running this code, you will get the following output −

                        length: 10 width: 5
                        value of area : 50
Since a constant is also an identifier in C, it follows all the rules of forming an identifier. Identifiers in C are case-sensitive. Hence the convention followed while defining a constant in C is that it uses uppercase characters, however it is not mandatory.

Changing the Value of a Constant
By definition, constants are immutable. Why would you change the value of a constant in the first place? We use constants whose value is supposed to remain unchanged. To be able to change the value, we would define a variable rather than a constant.

We have seen that it is not possible to assign a new value to an already defined constant. However, there exists a workaround with which a new value can be assigned to a constant.

The technique uses the concept of pointers in C. A Pointer is a variable that stores the address of another variable. Since it is a variable, its value can be changed. Moreover, this change reflects in the original variable.

Example: Change the Value of a Constant
The following code demonstrates how to change the value of a constant with the pointer mechanism −

                        #include <stdio.h>
                        int main(){
                        const int x = 10;
                        printf("Initial Value of Constant: %d\n", x);

                        // y is a pointer to constant x
                        int* y = &x;
                        
                        // assign new value
                        *y = 100;
                        printf("Value of Constant after change: %d", x);
                        return 0;
                        }
Output
On executing this code, you will get the following output −

Initial Value of Constant: 10
Value of Constant after change: 100
Note that this technique is effective only for those constants which are defined using the const qualifier.

If you have defined your constant using the #define directive, then you cannot apply this process. This is because the pointer has a data type, and it must be of the same type whose address is to be stored. On the other hand, the constant defined using the #define directive doesn't really have a data type. It is in fact a macro whose value is substituted during the runtime.