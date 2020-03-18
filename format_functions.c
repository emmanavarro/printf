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
 * @percent: List of arguments
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

/**
 * print_num - prints a number.
 * @i: number to print.
 *
 * Return: counter.
 */
int print_num(int i)
{
	int gt_num, j, k = 1, cont = 0;

	gt_num = i;

	if (i < 0)
	{
		k = k * -1;
		_putc('-');
		cont++;
	}
	while (gt_num > 9 || gt_num < -9)
	{
		gt_num = gt_num / 10;
		k = k * 10;
	}
	while (k > 9 || k < -9)
	{
		j = (i / k) % 10;
		_putc(j + '0');
		k = k / 10;
		cont++;

	}
	if (i < 0)
	{
		_putc((i % 10) * -1 + '0');
		cont++;
	}
	else
	{
		_putc(i % 10 + '0');
		cont++;
	}
	return (cont);
}

/**
  * print_dec - prints decimal numbers.
  * @list: list of arguments to print.
  *
  * Return: counter.
  */
int print_dec(va_list list)
{
	int num, cont;

	num = va_arg(list, int);

	cont = print_num(num);

	return (cont);
}
