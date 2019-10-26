#include "holberton.h"

/**
 * _printf - function that sends formatted output to stdout.
 * @format: This is the string that contains the text to be written to stdout.
 * It can optionally contain embedded format tags that are replaced by the
 * values specified in subsequent additional arguments and formatted as
 * requested.
 *
 * Return: Print a new line at the end of your function
 */

int _printf(const char *format, ...)
{
	va_list arg;
	/* indexes */
	int i, n = 0;
	/* Function pointer */
	int (*f)(va_list);

	/* TODO - Create a function to handle only specifiers? */
	forma_t p[] = {
		{"c", op_c},
		{NULL, NULL}
	};

	/* Validate if a format is comming */
	if (!format)
		return (-1);

	va_start(arg, format);

	i = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			n++;
		}
		/* Send specifier to function pointer */
		f = *p[i].f;
		/* Check if coming NULL {NULL, NULL}*/

		/* if not coming null Fire! */

	}
	va_end(arg);
	return (n);
}
