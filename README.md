# COMPILER-DESIGN-BASICS

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: ATHARVA GULHANE

*INTERN ID*: CT04DF2093

*DOMAIN*: C Programming

*DURATION*: 4 WEEEKS

*MENTOR*: NEELA SANTOSH

##DESCRIPTION OF TASK

The task was to design and implement a simple lexical analyzer in C that reads code from an input file, analyzes it, and classifies tokens as keywords, identifiers, and operators. This project helped me understand how compilers process source code, starting from the lexical analysis phase, which breaks raw code into meaningful elements called tokens.

The lexical analyzer starts by defining a list of C language keywords such as int, float, if, else, while, for, return, char, double, and void. These are reserved words in C that have special meaning and must be recognized separately from user-defined names.

The core functionality was implemented in three parts:

Checking keywords:
A function named isKeyword compares each word found in the input text against the list of predefined keywords. It uses the strcmp function from the string library to check for an exact match. If a match is found, the word is classified as a keyword.

Checking operators:
Another function, isOperator, checks if a character is an operator by comparing it to a list of single-character operators like +, -, *, /, %, <, >, =, &, |, !, and ^. These operators are essential building blocks in C for performing arithmetic, logical, and bitwise operations.

Reading and analyzing input:
The main function opens a file named input.txt using the standard file I/O functions. It reads the file character by character using fgetc. When it encounters alphanumeric characters (letters or digits), it accumulates them into a buffer named word. Once a non-alphanumeric character (like space, newline, or symbol) is found, it finalizes the word, checks if it's a keyword using isKeyword, or otherwise classifies it as an identifier. If the character itself is an operator, it prints it separately.

The program then prints out each token found, labeled as [Keyword], [Identifier], or [Operator], helping visualize how a compiler breaks down source code into tokens.

For implementation, I used:

Visual Studio Code (VS Code): as the code editor, offering syntax highlighting, integrated terminal, and error checking.

GCC compiler: installed via MinGW on Windows, to compile the program.

Windows PowerShell: to run the compiled executable.

#OUTPUT

