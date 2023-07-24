#include "main.h"

/**
 * _printf -  produces output according to a format,
 * write output to stdout, the standard output stream
 * @format: 
 *
 * Return:  number of characters printed
*/
int _printf(const char *format, ...)
{
	int i = 0, cmpt = 0;
	char *str;
	va_list args;
	
	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			cmpt++;
			switch (format[i])
			{
			case 'c':
				_putchar(va_arg(args, int));
				break;
			case 's':
			{
				str = va_arg(args, char *);
				while (*str)
				{
					_putchar(*str);
					str++;
					cmpt++;
				}
				break;
			}
			default:
				_putchar(format[i]);
				break;
			}
		}
		else
			_putchar(format[i]);
		i++;
		cmpt++;
	}
	va_end(args);
	return (cmpt);
}
