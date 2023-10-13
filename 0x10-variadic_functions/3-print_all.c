#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: contains list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char c;
	int l;
	char *str;
	double d;

	va_start(args, format);

	while (format && format[i])
	{
		c = format[i];
		switch (c)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				l = va_arg(args, int);
				printf("%d", l);
				break;
			case 'f':
				d = va_arg(args, double);
				printf("%f", d);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
		}
		if ((format[i + 1]) && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
}
