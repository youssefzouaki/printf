#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{  
 int i;
 int len[10];
    
   /* unsigned int ui;
    void *addr;
*/
    
   len[1] = _printf("Let's try to printf a simple sentence.\n");
   len[2] = printf("Let's try to printf a simple sentence.\n");

    len[3] = _printf("Character:[%c]\n", 'H');
    len[4] = printf("Character:[%c]\n", 'H');
    len[5] =_printf("String:[%s]\n", "I am a string !");
    len[6] = printf("String:[%s]\n", "I am a string !");
    len[7] = _printf("Percent:[%%]\n");
    len[8] = printf("Percent:[%%]\n");

    len[9] = _printf("Unknown:[%r]\n");
    len[10] = printf("Unknown:[%r]\n");
    _printf("_percent+space:% ");
    _printf("\n_percent:%");
    _printf("\n_percent+space+char+new_line:% r\n");
    printf("percent:%");
    printf("\npercent+space:% ");
    printf("\npercent+space+char+new_line:% r\n");
    /*
   ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;

    len[7] = _printf("Length:[%d, %i]\n", len[1], len[1]);
    len[8] = printf("Length2:[%d, %i]\n", len[2], len[2]);
    
    len[9] =_printf("Negative:[%d]\n", -762534);
    len[10] = printf("Negative:[%d]\n", -762534);
    */
    for (i = 1; i <= 10; i++)
    {
    printf("Len%d:[%d]\n", i, len[i]);
    }

/*
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    
    */
    return (0);
}
