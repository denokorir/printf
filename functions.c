#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: string to print
 * Return: chars printed
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
