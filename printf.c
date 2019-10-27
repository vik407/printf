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

int op_s(va_list s)
{
        int index;
	int counter;

        char* str = va_arg(s, char*);
	if(str == NULL)
	return (0);
	for (counter = 0; str[counter] != '\0'; counter++)
		;

        for (index = 0; *(str + index); index++)
                write (1, (str + index), 1);
	return (counter);
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
	char car;
	forma_t p[] = {
		{"c", op_c},
		{"s", op_s},
		{NULL, NULL}
	};

	va_start(arg, format);

	/* Validate if a format is comming */
	if (format == NULL)
		return (-1);
	car = format[j];
	while (car != '\0')
	{
		if (car == '%')
		{
			i = 0;
			j++;
			while (p[i].f != NULL && format[j] != *(p[i].f))
			{
				i++;
			}
			if (p[i].f != NULL)
			{
				_putchar(i);
				counter = counter + p[i].func(arg);
				i++;
			}
			else
			{
				if (car == '\0')
				{
					return (-1);
				}
				if(car != '%')
				{
					counter += _putchar('%');
				}
				counter += _putchar(car);
			}
		}
		else
		{
			counter += _putchar(car);
		}
		j++;
		car = format[j];
	}
	va_end(arg);
	return (counter);
}
