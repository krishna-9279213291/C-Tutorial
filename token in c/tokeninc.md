Tokens in C :

    A token is referred to as the smallest unit in the source code of a computer language such as C. The term token is borrowed from the theory of linguistics. Just as a certain piece of text in a language (like English) comprises words (collection of alphabets), digits, and punctuation symbols. A compiler breaks a C program into tokens and then proceeds ahead to the next stages used in the compilation process.

The first stage in the compilation process is a tokenizer. The tokenizer divides the source code into individual tokens, identifying the token type, and passing tokens one at a time to the next stage of the compiler.

The parser is the next stage in the compilation. It is capable of understanding the language's grammar. identifies syntax errors and translates an error-free program into the machine language.

A C source code also comprises tokens of different types. The tokens in C are of the following types − 

- Character set
- Keyword tokens
- Literal tokens
- Identifier tokens
- Operator tokens
- Special symbol tokens

C Character set :

The C language identifies a character set that comprises English alphabets upper and lowercase (A to Z, as well as a to z), digits 0 to 9, and certain other symbols with a special meaning attached to them. In C, certain combinations of characters also have a special meaning attached to them. For example, \n is known as a newline character. Such combinations are called escape sequences.

Here is the character set of C language −

- Uppercase: A to Z
- Lowercase: a to z
- Digits: 0 to 9
- Special characters: ! " # $ % & ' ( ) * + - . : , ; ` ~ = < > { } [ ] ^ _ \ /

A sequence of any of these characters inside a pair of double quote symbols " and " are used to represent a string literal. Digits are used to represent numeric literal. Square brackets are used for defining an array. Curly brackets are used to mark code blocks. Back slash is an escape character. Other characters are defined as operators.

C Keywords :

In C, a predefined sequence of alphabets is called a keyword. Compared to human languages, programming languages have fewer keywords. To start with, C had 32 keywords, later on, few more were added in subsequent revisions of C standards. All keywords are in lowercase. Each keyword has rules of usage (in programming it is called syntax) attached to it.

The C compiler checks whether a keyword has been used according to the syntax, and translates the source code into the object code.

C Literals :

In computer programming terminology, the term literal refers to a textual representation of a value to be assigned to a variable, directly hard-coded in the source code.

A numeric literal contains digits, a decimal symbol, and/or the exponentiation character E or e.

The string literal is made up of any sequence of characters put inside a pair of double quotation symbols. A character literal is a single character inside a single quote.

Arrays can also be represented in literal form by putting a comma-separated sequence of literals between square brackets.

In C, escape sequences are also a type of literal. Two or more characters, the first being a backslash \ character, put inside a single quote form an escape sequence. Each escape sequence has a predefined meaning attached to it.

C Identifiers :

In contrast to the keywords, the identifiers are the user-defined elements in a program. You need to define various program elements by giving them an appropriate name. For example, variable, constant, label, user-defined type, function, etc.

There are certain rules prescribed in C, to form an identifier. One of the important restrictions is that a reserved keyword cannot be used as an identifier. For example, for is a keyword in C, and hence it cannot be used as an identifier, i.e., name of a variable, function, etc.

C Operators :

C is a computational language. Hence a C program consists of expressions that perform arithmetic and comparison operations. The special symbols from the character set of C are mostly defined as operators. For example, the well-known symbols, +, −, * and / are the arithmetic operators in C. Similarly, < and > are used as comparison operators.

C Special symbols :

Apart from the symbols defined as operators, the other symbols include punctuation symbols like commas, semicolons, and colons. In C, you find them used differently in different contexts.

Similarly, the parentheses ( and ) are used in arithmetic expressions as well as in function definitions. The curly brackets are employed to mark the scope of functions, code blocks in conditional and looping statements, etc.