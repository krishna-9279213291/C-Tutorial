 C - Identifiers :

Identifier in C helps in identifying variables, constants, functions etc., in a C code. C, being a high-level computer language, allows you to refer to a memory location with a name instead of using its address in binary or hexadecimal form.

C Identifiers : 
Identifiers are the user-defined names given to make it easy to refer to the memory. It is also used to define various elements in the program, such as the function, user-defined type, labels, etc. Identifiers are thus the names that help the programmer to use programming elements more conveniently.

When a variable or a function is defined with an identifier, the C compiler allocates it the memory and associates the memory location to the identifier. As a result, whenever the identifier is used in the instruction, C compiler can access its associated memory location. For example, when we declare a variable age and assign it a value as shown in the following figure, the compiler assigns a memory location to it.

Memory :

Even if the programmer can use an identifier of his choice to name a variable or a function etc., there are certain rules to be followed to form a valid identifier.
 
Naming Rules of C Identifiers :

Given below are the rules using which an identifier is formed −

Keywords can't be used as identifiers as they are predefined.
Out of the character set that C uses, only the alphabets (upper and lowercase) and the underscore symbol (_) are allowed in the identifier. It implies that you can't use characters like the punctuation symbols etc. as a part of the identifier.
The identifier must start either with an alphabet (upper or lowercase) or an underscore. It means, a digit cannot be the first character of the identifier.
The subsequent characters may be alphabets or digits or an underscore.
Same identifier can't be used as a name of two entities. An identifier can be used only once in the current scope.
As per the above rules, some examples of the valid and invalid identifiers are as follows −

Valid C Identifiers :

            age, Age, AGE, average_age, __temp, address1, phone_no_personal, _my_name
            Invalid C Identifiers
            Average-age, my name, $age, #phone, 1mg, phy+maths

Examples of C Identifiers : 
The following program shows an error −

                            #include <stdio.h>

                            int main () {

                                    /* variable definition: */
                                    int marks = 50;
                                    float marks = 65.50;
                                    printf("%d %f", marks, marks);

                                    return 0;
                            }



                    Error
                    main.c: In function 'main':
                    main.c:7:10: error: conflicting types for 'marks'; have 'float'
                        7 |    float marks = 65.50;
                        |          ^~~~~
                    main.c:6:8: note: previous definition of 'marks' with type 'int'
                        6 |    int marks = 50;
                        |        ^~~~~
                    main.c:8:13: warning: format '%d' expects argument of type 'int', but argument 2 has type 'double' [-Wformat=]
                        8 |    printf("%d %f", marks, marks);
                        |            ~^      ~~~~~
                        |             |      |
                        |             int    double
                        |            %f  
Identifiers are case-sensitive, as a result age is not the same as AGE.
ANSI standard recognizes a length of 31 characters for an identifier. Although you can choose a name with more characters, only the first 31 will be recognized. Thus you can form a meaningful and descriptive identifier.

Scope of C Identifiers :

In C language, the scope of identifiers refers to the place where an identifier is declared and can be used/accessed. There are two scopes of an identifier:

Global Identifiers :

If an identifier has been declared outside before the declaration of any function, it is called as an global (external) identifier.

Example :

            #include <stdio.h>

            int marks= 100; // external identifier

            int main() {
                    printf("The value of marks is %d\n", marks);
            }

Output:  

The value of marks is 100
This is because marks is defined outside of any blocks, so it is an external identifier.

Local Identifiers
On the other hand, an identifier inside any function is an local (internal) identifier.

Example : 
            #include <stdio.h>

            int main() {
                    int marks= 100; // internal identifier

                    printf("The value of marks is %d\n", marks);
            }
Output : 

The value of marks is 100
This is because marks is defined inside main function, so it is an internal identifier.

Examples of Different Types of C Identifiers : 

Identifiers can also appear in a forward declaration of a function. However, the declaration signature of a function should match with the definition.

Example of Variable Identifier : 
            int marks1 = 50, marks2 = 60;
            float avg = (float) (marks1+marks2)/2;
            Example of Function Identifier
            int average(int marks1, int marks2)
            {
            return (float) (marks1+marks2)/2;
            }
Example of User-defined Type Identifier : 

                    struct student
                    {
                    int rollno;
                    char *name;
                    int m1,m2,m3;
                    float percent
                    };
                    struct student s1 = {1, "Raju", 50, 60, 70, 60.00};

Example of Typedef Identifier :

            struct student
            {
            int rollno;
            char *name;
            int m1,m2,m3;
            float percent
            };
            typedef struct student STUDENT;
            STUDENT s1 = {1, "Raju", 50, 60, 70, 60.00};

Example of Label Identifier : 
                #include <stdio.h>
                int main()
                {
                int x=0;
                begin:
                x++;
                if (x>=10)
                    goto end;
                printf("%d\n", x);
                goto begin;

                end:
                    return 0;
                }
Output: 

            1
            2
            3
            4
            5
            6
            7
            8
            9 

Example of Enum Identifier :

            #include <stdio.h>
            enum week{Mon=10, Tue, Wed, Thur, Fri=10, Sat=16, Sun};

            int main() {
            printf("The value of enum week: %d\n",Mon);
            return 0;
            }
Output : 

            The value of enum week: 10
            
Thus, the identifiers are found everywhere in the C program. Choosing right identifier for the coding element such as the variable or a function is important for enhancing the readability and debugging and documentation of the program.