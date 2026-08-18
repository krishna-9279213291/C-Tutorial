Basic Syntax : 

In C programming, the term "syntax" refers to the set of rules laid down for the programmer to write the source code of a certain application. While there is a specific syntax recommended for each of the keywords in C, certain general rules need to be followed while developing a program in C.

A typical source code of a C program has the following elements − 

    // Hello world program 
    #include <stdio.h> // header file
    int a = 10; // global declarations
    // the main function
    int main() {
        char message[] = "Hello world" ; // Local variable
        printf("%s", message);
        return 0;
    }

Tokens in C : 

A C program consists of various tokens and a token is either a keyword, an identifier, a constant, a string literal, or a symbol. For example, the following C statement consists of five tokens − 
    printf("Hello , world \n");

The individual tokens are -
    printf
    (
        "Hello, World! \n"
    ) ;

The C compiler identifies whether the token is a keyword, identifier, comment, a literal, an operator, any of the other recognized special symbols or not. This exercise is done by the tokenizer in the first stage of the compilation process. 

Identifiers in C :

A C identifier is a name used to identify a variable, function, or any other user-defined item. An identifier starts with a letter A to Z, a to z, or an underscore '_' followed by zero or more letters, underscores, and digits (0 to 9).

C prescribes certain rules to form the names of variables, functions or other programming elements. They are not keywords. An identifier must start with an alphabet or underscore character, and must not have any other character apart from alphabets, digits and underscore.

C does not allow punctuation characters such as @, $, and % within identifiers. C is a case−sensitive programming language. Thus, Manpower and manpower are two different identifiers in C. Here are some examples of acceptable identifiers − 
    mohd    zara    abc     move_name   a_123
    myname50    _temp   j   a23b9   retval

Keywords in C :

The most important part of C language is its keywords. Keywords are the reserved words having a predefined meaning with prescribed syntax for usage. In ANSI C, all keywords have lowercase alphabets. The programmer needs to choose the correct keywords to construct the solution of the problem at hand. To learn programming is basically to learn to correctly use the keywords.

The following list shows the reserved words in C. These reserved words may not be used as constants or variables or any other identifier names.
        auto
        else
        long
        switch
        break
        enum
        register
        typedef
        case
        extern
        return
        union
        char
        float
        short
        unsigned
        const
        for
        signed
        void
        continue 
        goto
        sizof
        while
        do
        int
        struct
        _packed
        double

Semicolons in C :

In a C program, the semicolon is a statement terminator. That is, each individual statement must be ended with a semicolon. It indicates the end of one logical entity.

Given below are two different statements − 
        printf("Hello, World! \n");
        return 0; 

Since the semicolon ";" is only the delimiter symbol for a C statement, there may be more than one statements in a one physical line in a C program. Similarly, a single statement may span over more than one lines in the source code.

The following line is perfectly valid in C. In one line, there are multiple statements −
        int a=10; if (a>=50) printf("pass"); else printf("fail");

The following code is also valid even if a statement spills over multiple lines − 
        if
            (a >= 50)
            printf("pass");
            else printf("fail");

Comments in C :

Comments are like helping text in your C program and they are ignored by the compiler. They start with /* and terminate with the characters */ as shown below − 


        /* my first program in C */

You cannot have comments within comments and they do not occur within a string or character literals. 

Source Code :

The C program is a text file, containing a series of statements. The file must have a .c as its extension. The C compiler identifies only the .c file for compilation process. Only the English alphabets are used in the keywords and other identifiers of C language, although the string literals may contain any Unicode characters. 

The main() Function :

Every C program must have one (and only one) main() function, from where the compiler starts executing the code. However, it is not necessary that the main() function should be in the beginning of the code in the .c file. There can be any number of functions in a C program. If a function calls any other function before its definition, there should be its forward declaration. 

Header Files :

In addition to the keywords, a C program often needs to call predefined functions from the library of header files. The required header files are imported with the #include preprocessor directive. All the #include statements must be in the beginning of the source code. 

Variable Declaration :

C is a statically typed language. It requires, all the variables appearing in a program to be declared before using. Variables can be declared globally i.e. outside any function, or locally within the scope of a function. The variable can store a value only of its declared type. This is one of the important rules of C. 

Statements in a C Program :

Statements are the basic building blocks of the program. Statements in the main() function are executed in a top to bottom order by default. The sequence is controlled by conditionals or looping constructs. As a basic syntax rule, each statement must have semicolon (;) at the end. 

Whitespaces in a C Program :

While compiling the source code, the compiler ignores the whitespaces. Whitespace is the term used in C to describe blanks, tabs, newline characters and comments. While one can use them for better readability of the code, they have little significance for the compiler (unless they are a part of a string literal, appearing inside the double quote symbols). A line containing only whitespace, possibly with a comment, is known as a blank line, and a C compiler totally ignores it.

Whitespace separates one part of a statement from another and enables the compiler to identify where one element in a statement, such as int, ends and the next element begins. Therefore, in the following statement − 

    int age;

There must be at least one whitespace character (usually a space) between int and age for the compiler to be able to distinguish them. On the other hand, in the following statement − 

    fruit = apples + oranges;   // get the total fruit

No whitespace characters are necessary between "fruit" and "=", or between "=" and "apples", although you are free to include some if you wish to increase readability. 

Compound Statements in C :

Often, you need to define a cohesive block of statements as a single unit of programming logic. For example, you may want more than one statements to be executed if a certain logical expression is true, or multiple statements in a looping block. Similarly, a user-defined function may have more than one statements. In such cases, statements are grouped together to form a compound statement. C uses curly brackets for such grouping. 
    {
        Statement1;
        Statement2;
        .....
        .....
        .....
    }

In the following code, the if and else parts have a block each of statements.
         
         int maiks = 40;
         if (marks < 50 ){
            printf("Result: Fail\n") ;
            printf("Better Luck next time") ;
         }
         else {
            printf("result: pass \n");
            printf("Congratulations");
         }

curly bracktes are also used in the function definition. 

        float area_of_square(float side) {
            float area = pow(side , 2) ;
            return area;
        }

Defining a custom type with struct, union or enum also requires clubbing more than one statements together with curly brackets. 
        struct student {
            char name[20];
            int marks, age;
        };

The curly brackets also declare an array as follows -
            int marks[ ] = {40,45,34,3,2,432};