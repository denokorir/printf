#include "main.h"
/**
 * _puts - prints a string
 * @str: str to be printed
 * Return: chars printed
 */
int _puts(char *str)
{
	int i;

	int chars_printed = 0;

	if (str == NULL)
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
		chars_printed++;
	}

	return (chars_printed);
}
