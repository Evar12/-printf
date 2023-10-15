#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
*_printf - function that print output according to format
*@format: string been pass
*Return: chars to be printed.
*/

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
					putchar(va_arg(args, int));
					count++;
					break;
				case 's':
					{
				char *str = va_arg(args, char *);

			while (*str != '\0')
			{
				putchar(*str);
				str++;
				count++;
			}
					}
					break;
				case '%':
					putchar('%');
					count++;
					break;
				default:
					break;
			}
		}
		else
		{
			putchar(*format)
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

int main(void);
{
	_printf("Hello, %s! The answer is %d%c\n", "world", 42, '.');

	return (0);
}
