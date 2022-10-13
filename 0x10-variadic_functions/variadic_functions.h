#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void p_char(va_list list);
void p_string(va_list list);
void p_float(va_list list);
void p_integer(va_list list);

/**
 * struct checker - multiple choice print
 * @type: char Type of print
 * @f: funct
 */

typedef struct checker
{
		char *type;
			void (*f)();
} checker;
#endif
