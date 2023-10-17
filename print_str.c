#include "main.h"
/**
 * printf_str - print a string
 * @val: argument
 * Return: Return the length of string
 */
int str(va_list string)
{
	int len;
	char *str;

	str = va_arg(string, char *);

	if (str == NULL)
		str = "(null)";
	len = 0;

	while (str[len] != '\0')
		len = len + _putchar(str[len]);
	return (len);
}
