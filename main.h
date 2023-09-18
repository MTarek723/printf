#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

#define BUFFER 1024

/**
 * struct format - match the conversion specifiers for printf
 * @spcfir: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *spcfir;
	int (*f)();
} match_function;

int pointer_print(va_list point);
int hex_point(unsigned long int point);
int hex_exc(unsigned int hexx);
int exclusive_str_print(va_list exc);
int hexup_print(va_list upp);
int hexlow_print(va_list low);
int oct_print(va_list oct);
int unsigned_print(va_list unsgned);
int bi_print(va_list bi);
int strev_print(va_list rev);
int rot13_print(va_list rot13);
int int_print(va_list in);
int deci_print(va_list d);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int percent_print(void);
int char_print(va_list c);
int string_print(va_list s);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
