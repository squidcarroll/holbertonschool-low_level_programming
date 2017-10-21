#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_all - prints all the things
 * @format: contains the format modifiers
 */
void print_all(const char * const format, ...)
{
	char *holder;
	int i = 0;
	va_list list;
	int c = 0;

	va_start(list, format);
	while (format[i])
	{
		c = 0;
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				if (holder != NULL)
				{
					holder = va_arg(list, char*);
					printf("%s", holder);
					break;
				}
				printf("(nil)");
				break;
			default:
				c = 1;
				break;
		}
		if (format[i] != '\0' && c == 0)
			printf(", ");
	}
	va_end(list);
	putchar ('\n');
}
