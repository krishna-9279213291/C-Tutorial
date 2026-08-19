Format Specifiers in C:

Format specifiers in C are certain special symbols used in the formatted console IO functions such as printf() and scanf(), as well as formatted file IO functions such as fprintf() and fscanf().

Format specifiers are formed of a predefined sequence of one or more alphanumeric characters followed by the % symbol. For example, %d, %s, %f, %lf, etc. are some of the format specifiers used in C.

Why Do We Use Format Specifiers in C? :

The CPU performs IO operations with input and output devices in a streaming manner. The data read from a standard input device (for example, a keyboard) through the standard input stream is called stdin. Similarly the data sent to the standard output, which is the computer display screen, through the standard output device is called stdout.

The computer receives data from the stream in a text form, however you may want to parse it in variables of different data types such as int, float or a string. Similarly, the data stored in int, float or char variables has to be sent to the output stream in a text format. Format specifier symbols are used exactly for this purpose. 

Format Specifiers in printf() Function :

The printf() function is the most commonly used standard output function, defined in the stdio.h header file. The prototype of printf() function is as follows − 

    int printf(format_string, expr1, expr2, . . ); 
The first argument of this function is a string that is interspersed with one or more format specifiers. There may be one or more expressions as argument after the first. The compiler substitutes each format specifier with the value of its successive expression. The resultant formatted string is then passed to the output stream.

Format Specifiers in scanf() Function :

Format specifiers are also used to parse the input stream into the variables of required type. The following example highlights how it's done.

Types of Format Specifiers : 

ANSI C defines a number of format specifiers. The following table lists the different specifiers and their purpose −

        %c          Character
        %d          Signed integer
        %e or %E    Scientific notation of floats
        %f          Float values
        %g or %G    Similar as %e or %E
        %hi         Signed integer (short)
        %hu         Unsigned Integer (short)
        %i          Unsigned integer
        %l or %ld or %li    Long
        %lf         Double
        %Lf         Long double
        %lu         Unsigned int or unsigned long
        %lli or %lld        Long long
        %llu            Unsigned long long
        %o              Octal representation
        %p              Pointer
        %s              String
        %u              Unsigned int
        %x or %X        Hexadecimal representation

- A minus symbol (−) tells left alignment.
- A number after % specifies the minimum field width. If a string is less than the width, it will be filled with spaces.
- A period (.) is used to separate field width and precision. 

Integer Format Specifiers : 
    C uses %d for signed integer, %i for unsigned integer, %ld or %li for long integer, %o or %O for octal representation, and %x or %X for hexadecimal representation of an integer.

Example
The following example highlights how integer format specifiers are used in C − 
        #include <stdio.h>
        int main(){
            int num = 20;
            printf("Signed integer: %d\n", num);
            printf("Unsigned integer: %i\n", num);
            printf("Long integer: %ld\n", num);
            printf("Long integer: %ld\n", num);
            printf("Hexadecimal integer: %x\n", num);
            return 0;
        }

Output : 
        Signed integer: 20
        Unsigned integer: 20
        Long integer: 20
        Octal integer: 24
        Hexadecimal integer: 14

Floating-point Formats :

C uses the %f format specifier for single precision float number, %lf for double precision, %Lf for long double number. To represent a floating point number in scientific notation, C uses the %e or %E specifier symbol.

You can specify the width and the precision in the form of number of places after the decimal point. For example, to state the width of number to 4 digits with 2 digits after the decimal point, use the form %4.2f.

Example :

Take a look at the following example −
    #include <stdio.h>
    int main(){
        float num = 5.347;
        printf("float: %f\n", num);
        printf("double: %lf\n", num);
        printf("Scientific notation: %e\n", num);
        printf("width and precision: %4.2f\n", num);
        return 0;
    }
Output : 
        float: 5.347000
        double: 5.347000
        Scientific notation: 5.347000e+000
        width and precision: 5.35
    
String Formats :
The char data type in C is actually a subset of int data type. Hence, a char variable with %c format specifier corresponds to the character in single quotes. On the other hand, if you use the %d specifier, then the char variable will be formatted to its ASCII value.

In C, a string is an array of char data. To display an array of chars, C uses the %s specifier.

Example :
Take a look at the following example −

        #include <stdio.h>
        int main(){
            char = 'D';
            char word[] = "Hello world";
            printf("As character: %C\n", ch);
            printf("As its ASCII value: %d\n", ch);
            printf("String format: %s", word);
            return 0;

        }

        output : 
            As character : D
            As its ASCII value : 68
            String formate : Hello world
        
Format Specifiers in File IO Functions :

The stdio.h library defines the functions fscanf() and fprintf() for formatted IO with disk files, instead of standard input/output streams.

Example 1 :

The following code opens a file in write mode and saves the values of three variables in it. 

        #include <stdio.h>
        int main(){
            int x , y , z;
            FILE * fp = fopen("test.txt", "w");
            x = 10; y = 20 ; z = 30;
            fprint(fp, "%d , %d, %d", x,y,z);
            fclose(fp);
            return 0;

        }

        output : 
            The fprint() function uses the file represented by the file pointer fp to write the data.
            