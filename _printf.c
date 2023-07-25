#include "main.h"
#include <unistd.h>
/**
 * _printf -  print a formated string
 * @format: pointer to a string containing all the desired characters
 *
 * Return:  number of characters printed
*/
int _printf(const char *format, ...)
{
	int i = 0, j = 0, len = 0, r_val;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_list[j].sym != NULL; j++)
			{
				if (format[i + 1] == f_list[j].sym[0])
				{
					r_val = f_list[j].f(args);
					if (r_val == -1)
						return (-1);
					len += r_val;
					break;
				}
			}
			if (f_list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					len += _putchar(format[i]);
					len += _putchar(format[i + 1]);
				}
				else
					return (-1);
			}
			i++;
		}
		else
			len += _putchar(format[i]);
	}
	va_end(args);
	return (len);
}
