#include "holberton.h"

/**
 * print_string - Prints a string
 * @list: List of arguments
 *
 * Return: number of characters printed
 */
int print_string(va_list list)
{
	char *str;
	int len_str;

	str = va_arg(list, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	for (len_str = 0; *str != '\0'; len_str++)
	{
		write(1, str, 1);
		str++;
	}

	return (len_str);
}

/**
 * print_char - Prints a character
 * @list: List of arguments
 *
 * Return: number of chatacter printed
 */
int print_char(va_list list)
{
	char c;

	c = va_arg(list, int);

	write(1, &c, 1);
	return (1);
}

/**
 * print_percent - Prints a percent
 * @percent: Pointer to string
 * @buffer: Pointer to buffer
 *
 * Return: number of chatacter printed
 */
int print_percent(char *percent, char *buffer)
{
	percent++;
	_putchar(buffer, '%');
	return (1);
}
