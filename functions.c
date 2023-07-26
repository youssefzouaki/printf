#include "main.h"
/**
 * print_char - Prints character
 * @args: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_string - Prints a string
 * @args: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_string(va_list args)
{
	int i;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_percent - Prints a percent symbol
 * @args: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_percent(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}
/**
 * print_integer - Prints an integer
 * @args: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_integer(va_list args)
{
	int num_length;

	num_length = print_number(args);
	return (num_length);
}

/**
 * unsigned_integer - Prints Unsigned integers
 * @args: List of all of the argumets
 * Return: a count of the numbers
 */
int unsigned_integer(va_list args)
{
	unsigned int num;

	num = va_arg(args, unsigned int);

	if (num == 0)
		return (print_unsgined_number(num));

	if (num < 1)
		return (-1);
	return (print_unsgined_number(num));
}