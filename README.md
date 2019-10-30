# printf

A customized printf function for Holberton School.

0x11. C - printf

Foundations - Low-level programming & Algorithm ― Hatching out.

 Project done by: Victor Hugo Hernandez, Mauricio Drada Dávila.

Started 10-25-2019, end by 10-30-2019.


Editors: vi, emacs.
All files compiled on Ubuntu 14.04 LTS.
Programs and functions compiled with gcc. -Wall -Werror -Wextra and -pedantic
All files end with a new line.
No global variables.
No more than 5 functions per file.
The prototypes of all functions included the header " holberton.h"
Header files include guards.

Authorized functions and macros:

write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)

File Descriptions

_printf.c: - Sends formatted output to stdout. Return the number of characters
printed (excluding null byte). Write output to stdout.

_putchar.c: - Writes a character to stdout.

holberton.h: - Functions prototypes used by the _printf function.

man_3_printf: - Manual page for _printf function.

printf_c.c: Prints a char.

printf_d.c: Prints an integer.

printf_i.c: Prints an integer.

printf_s.c: Prints a string.

_format_handler.c: Function to handler specifiers.

The code will compile by using:

gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c

USAGE:

_printf("%d format %s\n",1,  "string");
output: 1 format string
