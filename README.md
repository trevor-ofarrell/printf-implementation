# Printf

## Synopsis

## Description
Print ARGUMENT(s) according to FORMAT, or execute according to OPTION below.
this function writes output to stdout, the standard output stream. Returns the
the count of printed characters when function is successfull and -1 when the
functions fails.

OPTIONS for conversions specifiers:
+ %c: Prints a single character.
+ %s: Prints a string of characters.
+ %d: Prints integer.
+ %i: Prints integer.

## Usage
+ Your code should use the Betty style. It will be checked using betty-style.pl
  and betty-doc.pl
+ You are not allowed to use global variables
+ No more than 5 functions per file
+ No more than 80 lines per function
+ The prototypes of all your functions should be included in your header file
  called holberton.h

## Compilation
+ Compile code with  gcc -Wall Werror -Wextra -pedantic *.c
+ All files are to be compiled with Ubuntu 14.04 LTS

## Allowed macros & functions to use during this project
+ write (man 2 write)
+ malloc (man 3 malloc)
+ free (man 3 free)
+ va_start (man 3 va_start)
+ va_end (man 3 va_end)
+ va_copy (man 3 va_copy)
+ va_arg (man 3 va_arg)

## Files
+ Holberton.h : Header file which contains all functions prototypes
   and the definition of the structure.
+  _printf.c : contains all the logic  to re-create the printf function
+ formatspecifiers : contains all va_list functions to print the given formats
+ helperfuctions.c: contains functions to help support other files

## Authors
+ Trevor O'Farrell
+ Akeem Seymens