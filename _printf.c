#include "main.h"
#include <unistd.h>

/**
 * _printf -  produces output according to a format,
 * write output to stdout, the standard output stream
 * @format: 
 *
 * Return:  number of characters printed
*/
int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	char *str;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'c':
				len += _putchar(va_arg(args, int));
				break;
			case 's':
			{
				str = va_arg(args, char *);
				while (*str)
				{
					if (!str)
						len = write(1, "(null)", 6);
					len += _putchar(*str);
					str++;
				}
				break;
			}
			case '%':
				len += _putchar('%');
				break;
			default:
				len += _putchar(format[i]);
				break;
			}
		}
		else
			len += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
