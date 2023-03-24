#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - A function that prints anything.
 * @format: a list of types of arguments passed
 * to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *s;
	int aux;

	va_start(args, format);
	while (format[i])
	{
		if (i != 0 && aux == 1)
			printf(", ");
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(args, int));
			aux = 1;
			break;
			case 'i':
			printf("%d", va_arg(args, int));
			aux = 1;
			break;
			case 'f':
			printf("%f", va_arg(args, double));
			aux = 1;
			break;
			case 's':
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
			aux = 1;
			break;
			default:
			aux = 0;
			break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
