#include "holberton.h"
/**
 * _printf - Function that sends formatted output to stdout.
 * @format: Character string. Is composed of zero or more directives.
 * Return: Print a new line at the end of your function.
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int counter = 0;

	forma_t p[] = {
		{"c", op_c},
		{"s", op_s},
		{"d", op_i},
		{"i", op_i},
		{NULL, NULL}
		};

	va_start(arg, format);
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	counter = format_h(format, p, arg);

	va_end(arg);
	return (counter);
}
