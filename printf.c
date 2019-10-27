#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
 * op_c - prints a char
 * @c: char to print
 *
 * Return: always 1
 */
int op_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}

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
	int i = 0, j = 0, counter = 0;
	/* Function pointer 
	int (*f)(va_list);*/

	forma_t p[] = {
		{"c", op_c},
		{NULL, NULL}
	};

	va_start(arg, format);

	/* Validate if a format is comming */
	if (format == NULL)
			return (-1);

	while (format[j] != '\0')
	{
		if (format[j] == '%')
		{
			i = 0;
			/*while (p[i].f != NULL && format[j] != *(p[i].f))
			{
				printf("%s:%d\n",p[i].f,i);
				i++;
				printf("%s:%d\n",p[i].f,i);
			}*/
			if (p[i].f != NULL)
			{
				_putchar(i);
				counter = counter + p[i].func(arg);
			}
			else
			{
				_putchar('2');
				if (format[j] == '\0')
						return (-1);
				if(format[j] != '%')
						counter += _putchar('%');
				counter += _putchar(format[j]);
			}
			j++;
		}
		else
		{
			counter += _putchar(format[j]);
		}
		j++;
	}
	va_end(arg);
	return (counter);	
}
