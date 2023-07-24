#include "main.h"
/**
 * convert - convert number to decimal base
 * @num: number to convert
 * @base: 
 *
 * Return: pointer to string containing converted number
*/
char *convert(unsigned int num, int base)
{ 
	static char Representation[]= "0123456789ABCDEF";
	static char buffer[50]; 
	char *ptr; 

	ptr = &buffer[49]; 
	*ptr = '\0'; 

	do 
	{ 
		*--ptr = Representation[num%base]; 
		num /= base; 
	}while(num != 0); 

	return(ptr); 
}

/**
 * _printf -  produces output according to a format,
 * write output to stdout, the standard output stream
 * @format: 
 *
 * Return:  number of characters printed
*/
int _printf(const char *format, ...)
{
	int n, i = 0, cmpt = 0;
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
