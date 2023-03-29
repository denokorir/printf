#include <stdio.h>
#include "main.h"
/**
 * _printf - prints a formated string to stdout
 * @format: format of the string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;

	int chars_printed = 0, i = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				char c = (char) va_arg(args, int);

				chars_printed += putchar(c);
			}
			else if (format[i] == 's')
			{
				char *s = va_arg(args, char *);

				chars_printed += write(1, s, strlen(s));
			}
			else if (format[i] == '%')
			{
				chars_printed += putchar('%');
			}
		}
		else
		{
			chars_printed += putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (chars_printed);
}
