#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

struct convert
{
char *sym;
int (*f)(va_list);
};
typedef struct convert conver_t;

/*Main set of functions*/
int _printf(const char *format, ...);
int parser(const char *format, conver_t f_list[], va_list arg_list);
int print_char(va_list);
int print_percent(va_list);
int print_string(va_list);

#endif
