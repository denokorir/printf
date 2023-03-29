#include "main.h"
/**
 * _putchar - Prints character
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int _putchar(va_list list)
{
	_write_char(va_arg(list, int));
	return (1);
}
/**
 * _puts - prints a string to stdout
 * @str: string to print
 * Return: chars printed
 */
int _puts(va_list args)
{
char *str = va_arg(args, char *);
	int position = 0, chars_printed;

	while (str[position] != '\0')
	{
		_putchar(str[position]);
		position++;
		chars_printed++;
	}
	_putchar('\n');
	chars_printed++;

	return (chars_printed);
}
/**
* print_percent - prints percent symbol
* @list: list of args
* Return: chars printed
*/
int print_percent(__attribute__((unused))va_list list)
{
	_write_char('%');
	return (1);
}
/**
 * print_integer - Prints an integer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_integer(va_list list)
{
	int num_length;

	num_length = print_number(list);
	return (num_length);
}
/**
 * unsigned_integer - Prints Unsigned integers
 * @list: List of all of the argumets
 * Return: a count of the numbers
 */
int unsigned_integer(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsgined_number(num));

	if (num < 1)
		return (-1);
	return (print_unsgined_number(num));
}
/**
 * _strlen - prints string length
 * @s: string to print
 * Return: string length
 */
int _strlen(char *s)
{
	int len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (0);
}
