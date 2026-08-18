Need for User Input in C :

Every computer application accepts certain data from the user, performs a predefined process on the same to produce the output. There are no keywords in C that can read user inputs. 

The standard library that is bundled with the C compiler includes stdio.h header file, whose library function scanf() is most commonly used to accept user input from the standard input stream. In addition, the stdio.h library also provides other functions for accepting input. 

C User Input Function: The scanf() : 

The C language recognizes the standard input stream as stdin and is represented by the standard input device such as a keyboard. C always reads the data from the input stream in the form of characters.

The scanf() function converts the input to a desired data type with appropriate format specifiers. 

Syntax of Scanf() : 
    This is how you would use the scanf() function in C −
            int scanf(const char *format, &var1, &var2, . . .);

The first argument to the scanf() function is a format string. It indicates the data type of the variable in which the user input is to be parsed. It is followed by one or more pointers to the variables. The variable names prefixed by & gives the address of the variable. 

User Input Format Specifiers : 

Following format specifiers are used in the format string − 
        %c                          character
        %d                        signed integer
        %f                       unsigned integer
        %l or %ld or %li        long
        %lf                      double
        %Lf                     Long double
        %lu                   Unsigned int or unsigned long
        %lli or %lld            Long long
        %llu                    Unsigned long long



