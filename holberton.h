#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct formats - structre to handle the different formats
 * @f: the format
 * @func: the function pointer
 */
typedef struct formats
{
	char *f;
	int (*func)(va_list);
} forma_t;

int _printf(const char *format, ...);
int _putchar(char c);

/* Single prototypes as calc task */
int op_c(va_list c);
int op_s(va_list s);

#endif
