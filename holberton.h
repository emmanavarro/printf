#ifndef HOLBERTON_PRINTF_H
#define HOLBERTON_PRINTF_H
#define BUFFER_SIZE 1024

/* Included standard libraries */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct printf_types - struct formats.
 * 
 * @ftype: format.
 * @f: function associated.
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
int (*get_format(char fmt))();

/* Generic functions */

int _putchar(char *c, int len_buffer);
char *_strcat(char *dest, char *src);
int _printf(const char *format, ...);
void clear_buffer(char *buffer);
void print_buffer(char *buffer, int len);
int _strlen(char *s);

#endif /* HOLBERTON_PRINTF_H */
