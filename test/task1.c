#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * _itoa - converts an int to a string
 * @n: int to convert
 * @str: pointer to output buffer
 * Return: pointer to str
 */
char *_itoa(int n, char *str)
{
	char *p = str;
	int i = 0;

	if (n < 0)
	{
		*p++ = '-';
		n = -n;
	}
	do {
		*p++ = '0' + n % 10;
		n /= 10;
		i++;
	} while (n);

	*p = '\0';

	/*reverse the string*/
	for (int x = 0; x < i / 2; x++)
	{
		char temp = str[x];
		str[x] = str[i - x - 1];
		str[i - x - 1] = temp;
	}

	return (str);
}
/**_printf - prints formated output to stdout
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int chars_printed = 0;
	va_list args;
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format != '%')
		/*if it's a normal char, write it to output*/
		{
			char ch = *format;
			write(1, &ch, 1);
			chars_printed++;
		}
		else
		/*conversion specifier*/
		{
			/*skip '%'*/
			format++;
			
			if (*format == '\0')
			{
				return (-1);
			}
			if (*format == '%')
			{
			/*if it's a literal '%', print to stdout*/
				char ch = *format;
				write(1, &ch, 1);
				chars_printed++;
			}
			else if (*format == 'd' || *format == 'i')
			{
			/*if it's an int conversion specifier*/
				int num = va_arg(args, int);
				char *str;
				int length = 0;
			/*find length of int string*/
				int n = num;
				while (n != 0)
				{
					length++;
					n /= 10;
				}
				if (num <= 0)
				{
					length++;
				}
				/*allocate buffer for appropriate size*/
				str = (char *)malloc((length + 1) * sizeof(char));
				if (str == NULL)
				{
					va_end(args);
					/*failed to allocate memory*/
					return (-1);
				}
			/*convert the int to string and store it in the buffer*/
				_itoa(num, str);

				/*then print the string*/
				int printed = write(1, str, length);
				if (printed < 0)
				{
					free(str);
					va_end(args);
					return (printed);
				}
				else
				{
					chars_printed += printed;
				}
				/*free the buffer*/
				free(str);
			}
			else
			{
			/*if it is an unsupported conversion specifier*/
				return (-1);
			}
		}
		format++;
	}
	va_end(args);
	return (chars_printed);
}
