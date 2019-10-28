#include "holberton.h"
/**
 * _printf - Function that sends formatted output to stdout.
 * @format: Character string. Is composed of zero or more directives.
 * Return: Print a new line at the end of your function.
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0, j = 0, counter = 0;
	char car;
	forma_t p[] = {{"c", op_c}, {"s", op_s}, {NULL, NULL}};

	va_start(arg, format);
	if (!format)
		return (-1);
	car = format[j];
	while (format[j])
	{
		if (format[j] == '%')
		{
			i = 0;
			j++;
			while (p[i].f != NULL && format[j] != *(p[i].f))
				i++;
			if (p[i].f != NULL)
			{
				_putchar(i);
				counter = counter + p[i].func(arg);
				i++;
			} else
			{
				if (car == '\0' || format[1] == '\0')
					return (-1);
				if (car != '%')
					counter += _putchar('%');
				counter += _putchar(format[j]);
			}
		} else
		{
			counter += _putchar(car);
		}
		j++;
		car = format[j];
	}
	va_end(arg);
	return (counter);
}
