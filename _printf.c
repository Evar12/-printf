#include <stdio.h>
#include <stdarg.h>

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int printed_chars = 0, buff_ind = 0;
	va_list args;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (int i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
			{
				print_buffer(buffer, &buff_ind);
				printed_chars += buff_ind;
			}
			else
			{
				printed_chars++;
			}
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			i++;
			if (format[i] == '\0')

			switch (format[i])
			{
			printed_chars += printf("%d", va_arg(args, int));
			printed_chars += printf("%s", va_arg(args, char *));
			printed_chars += printf("%c", va_arg(args, int));
			putchar(format[i]);
			printed_chars++;
			return (-1);
			}
		}
	}

	print_buffer(buffer, &buff_ind);
	va_end(args);

	return (printed_chars);
}

/**
 * print_buffer - If the buffer exists, output its contents.
 * @buffer: Array of chars
 * @buff_ind: Next character index, representing buffer length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		while (1, &buffer[0], *buff_ind);

		*buff_ind = 0;
	}
}
