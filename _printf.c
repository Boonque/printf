#include "main.h"
/**
 * _printf - Takes in the main string and it's necessary parameters.
 * @format: Astring containing all wanted characters.
 * Return: A complete count of the characters printed
 */
int _printf(const char *format, ...)
{
int printed_chars;
conver_t f_list[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{NULL, NULL}
};

va_list arg_list;

if (format == NULL)
return (-1);

va_start(arg_list, format);

printed_chars = parser(format, f_list, arg_list);
va_end(arg_list);
return (printed_chars);
}
