#include "main.h"
<<<<<<< HEAD
=======
#include <stdio.h>
>>>>>>> 4967b3bab2180ee0112d6e325eec494811d8b776

/**
 * print_op - function to check which specifier to print
 * @format: string being passed
 * @print_arr: array of struct ops
 * @list: list of arguments to print
 * Return: numb of char to be printed
 */
int print_op(const char *format, fmt_t *print_arr, va_list list)
{
<<<<<<< HEAD
	int printed = 0;
	int i;
    va_list list;
    char buffer[BUFF_SIZE];
    int buff_ind = 0;

    if (format == NULL)
	    return -1;

    va_start(list, format);

    for ( i = 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            buffer[buff_ind++] = format[i];
            if (buff_ind == BUFF_SIZE)
            {
                write(1, buffer, buff_ind);
                printed += buff_ind;
                buff_ind = 0;
            }
        }
        else
        {
            if (buff_ind > 0)
            {
                write(1, buffer, buff_ind);
                printed += buff_ind;
                buff_ind = 0;
            }
            i++; /* Skip the '%' character */
            printed += handle_print(format, &i, list, buffer...);
        }
    }

    /* Print any remaining characters in the buffer */
    if (buff_ind > 0)
    {
        write(1, buffer, buff_ind);
        printed += buff_ind;
    }

    va_end(list);

    return printed;
}

=======
	char a;
	int count = 0, b = 0, c = 0;

	a = format[b];
	while (a != '\0')
	{
		if (a == '%')
		{
			c = 0;
			b++;
			a = format[b];
			while (print_arr[c].type != NULL &&
			       a != *(print_arr[c].type))
				c++;
			if (print_arr[c].type != NULL)
				count = count + print_arr[c].f(list);
			else
			{
				if (a == '\0')
					return (-1);
				if (a != '%')
					count += _putchar('%');
				count += _putchar(a);
			}
		}
		else
			count += _putchar(a);
		b++;
		a = format[b];
	}
	return (count);
}

/**
 * _printf - prints output according to format
 * @format: string being passed
 * Return: char to be printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int a = 0;

	fmt_t ops[] = {
		{"c", ch},
		{"s", str},
		{"d", _int},
		{"b", _bin},
		{"i", _int},
		{"u", _ui},
		{"o", _oct},
		{"x", _hex_l},
		{"X", _hex_u},
		{"R", _rot13},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);
	va_start(list, format);
	a = print_op(format, ops, list);
	va_end(list);
	return (a);
}
>>>>>>> 4967b3bab2180ee0112d6e325eec494811d8b776
