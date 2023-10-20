#include "main.h"

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
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

