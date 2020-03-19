#ifndef HOLBERTON_PRINTF_H
#define HOLBERTON_PRINTF_H
#define BUFFER_SIZE 1024

/* Included standard libraries */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct print_format - struct formats
 * @placeholder: format
 * @f: function associated
 *
 * Description: Define a new type struct print_f
 */
typedef struct print_format
{
	char *placeholder;
	int (*f)();
} print_f;

/* Print prototypes */

int print_string(va_list list);
int print_char(va_list list);
int print_percent(char *percent, char *buffer);
int print_num(va_list list);
int print_dec(va_list list);
int (*get_format(char fmt))();

/* Generic functions */

int _putchar(char *c, int len_buffer);
int _putc(char c);
char *_strcat(char *dest, char *src);
int _printf(const char *format, ...);
void clear_buffer(char *buffer);
void print_buffer(char *buffer, int len);
int _strlen(char *s);

#endif /* HOLBERTON_PRINTF_H */
