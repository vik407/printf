#include "holberton.h"
/**
 * format_h - Function to handler specifiers
 * @format: The string to search specifiers
 * @stc_ar: The struct options
 * @arg: The argument list
 * Return: numb of char to be printed
 */
int format_h(const char *format, forma_t *stc_ar, va_list arg)
{
	int i = 0, j = 0, k = 0;

		while (format[j])
		{
			if (format[j] == '%')
			{
				i = 0;
				while ((stc_ar[i].f) != NULL && format[j + 1] != *(stc_ar[i].f))
					i++;
				if (stc_ar[i].f != NULL)
				{
					k = k + stc_ar[i].func(arg);
					j++;
				}
				else
				{
					if (format[j + 1] == '%')
					{
						k += _putchar('%');
						j++;
					} else
					{
						k += _putchar(format[j]);
					}
				}
			} else
			{
				k += _putchar(format[j]);
			}
			j++;
		}
		va_end(arg);
		return (k);
}
