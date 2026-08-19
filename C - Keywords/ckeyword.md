C - Keywords :
    
    Keywords are those predefined words that have special meaning in the compiler and they cannot be used for any other purpose. As per the C99 standard, C language has 32 keywords. Keywords cannot be used as identifiers.

The following table has the list of all keywords (reserved words) available in the C language.

        auto	    double	 int	   struct
        break	    else    long	   switch
        case   	     enum	 register	typedef
        char	 extern 	return	    union
        continue	for	signed	void
            do	if	static	while
            default	goto	sizeof	volatile
            const	float	short	unsigned

All the keywords in C have lowercase alphabets, although the keywords that have been newly added in C, do have uppercase alphabets in them. C is a case-sensitive language. Hence, int is a keyword but INT, or Int are not recognized as a keyword. The new keywords introduced from C99 onwards start with an underscore character. The compiler checks the source code for the correctness of the syntax of all the keywords and then translates it into the machine code. 

Example of C Keywords  :

In the following program, we are using a keyword as an identifier i.e., as the name of the user-defined function, that will cause a compilation error.

        #include <stdio.h>
        void register(int, int);
        int main () {
            /* variable definition: */
            int a=5, b=7;
            register(a,b);
            return 0;
            }
                void register(int a, int b)
                {
                     printf("%d", a+b);
                }

    errors :
                  main.c:3:15: error: expected identifier or '(' before 'int'
                         3 | void register(int, int);
                             |               ^~~
                    main.c: In function 'main':
                    main.c:8:14: error: expected ')' before ',' token
                            8 |    register(a,b);
                            |              ^
                              |              )
                            main.c: At top level:
                            main.c:12:15: error: expected identifier or '(' before 'int'
                            12 | void register(int a, int b)
                            |               ^

The reason for the errors is that we are using a keyword register as the name of a user-defined function, which is not allowed.

The ANSI C version has 32 keywords. These keywords are the basic element of the program logic. These keywords can be broadly classified in following types −

- Primary Data types
- User defined types
- Storage types
- Conditionals
- Loops and loop controls
- Others


Primary Types C Keywords :

These keywords are used for variable declaration. C is a statically type language, the variable to be used must be declared. Variables in C are declared with the following keywords:

            int	Declares an integer variable
            long	Declares a long integer variable
            short	Declares a short integer variable
            signed	Declares a signed variable
            double	Declares a double-precision variable
            char	Declares a character variable
            float	Declares a floating-point variable
            unsigned	Declares an unsigned variable
            void	Specifies a void return type

User-defined Types C Keywords : 

C language allows you to define new data types as per requirement. The user defined type has one or more elements of primary type.

The following keywords are provided for user defined data types −

        struct	Declares a structure type
        typedef	Creates a new data type
        union	Declares a union type
        enum	Declares an enumeration type

Storage Types C Keywords :

The following set of keywords are called storage specifiers. They indicate the location where in the memory the variables stored. Default storage type of a variable is auto, although you can ask the compiler to form a variable with specific storage properties.

            auto	Specifies automatic storage class
            extern	Declares a variable or function
            static	Specifies static storage class
            register	Specifies register storage class

 Conditionals C Keywords :
    The following set of keywords help you to put conditional logic in the program. The conditional logic expressed with if and else keywords provides two alternative actions for a condition. For multi-way branching, use switch case construct. In C, the jump operation in an assembler is implemented by the goto keyword.

        goto	Jumps to a labeled statement
        if	Starts an if statement
        else	Executes when the if condition is false
        case	Labels a statement within a switch
        switch	Starts a switch statement
        default	Specifies default statement in switch

Loops and Loop Control C Keywords :

Repetition or iteration is an essential aspect of the algorithm. C provides different alternatives for forming a loop, and keywords for controlling the behaviour of the loop. Each of the keywords let you form a loop of different characteristics and usage.

            For	Starts a for-loop
            do	Starts a do-while loop
            while	starts a while loop
            continue	Skips an iteration of a loop
            break	Terminates a loop or switch statement


Other C Keywords :
The following miscellaneous keywords are also extremely important:

        const	Specifies a constant value
        Sizeof	Determines the size of a data type
        Volatile	compiler that the value of the variable may change at any time
    In C99 version, five more keywords were added −

            _Bool
            _Complex
            _Imaginary
            inline
In C11, seven more keywords have been added

                _Alignas
                _Alignof
                _Atomic
                _Generic
                _Noreturn
                _Static_assert
When the C23 standard will be released it will introduce 14 more keywords −

                    alignas
                    alignof
                    bool
                    constexpr
                    false
                    nullptr
                    static_assert
                    thread_local
                    true
                    typeof
                    typeof_unqual
                    _Decimal128
Most of the recently reserved words begin with an underscore followed by a capital letter, Since existing program source code should not have been using these identifiers.

Following points must be kept in mind when using the keywords:

Keywords are reserved by the programming language and have predefined meaning. They cannot be used as name of a variable or function.
Each keyword has to be used as per the syntax stipulated for its use. If the syntax is violated, the compiler reports compilation errors.
C is one of the smallest computer languages with only 32 keywords in its ANSI C version, although a few more keywords have been added afterwards.