#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: string to be printed
 * Return: str
 */
int _puts(char *str)
{
	int position = 0;

	while (str[position] != '\0')
	{
		_putchar(str[position]);
		position++;
	}
	return (position);
}
/**
 * _printf - prints a formated string to stdout
 * @format: format of the string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int chars_printed = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				_putchar(va_args(args, int))
				chars_printed++;
			}
			else if (*format == 's')
			{
				const char *s = va_arg(args, const char *);

				while (*s != '\0')
				{
					_putchar(*s);
					s++
					chars_printed++;
				}
			}
			else if (*format == '%')
			{
				_putchar('%');
				_putchar(*format);
				chars_printed += 2;
			}
			else
			{
			 _putchar(*format);
			chars_printed++;
			}
		}
		va_end(args);
		return (chars_printed);
}
