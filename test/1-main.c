#include "main.h"
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int alen, elen;
	char c = 'z';
	char *str = NULL;

	printf("START OF TEST\n");
	printf("=====================\n");
	printf("printf(NULL)  : %d\n", printf(str));
	printf("_printf(NULL) : %d\n", _printf(str));
	printf("printf(\"%\") : %d\n", printf("%"));
	printf("_printf(\"%\"): %d\n", _printf("%"));
	str = "hello, world";
	printf("=====================\n");
	printf("*****CHAR*****\n");
	printf("=====================\n");
	printf("Expected   : %c\n", 'a');
	_printf("Actual     : %c\n", 'a');
	elen = printf("Expected   : %c\n", c);
	alen = _printf("Actual     : %c\n", c);
	printf("Expected   : %i\n", elen);
	printf("Actual     : %i\n", alen);
	printf("Expected   : %cc\n", 'a');
	_printf("Actual     : %cc\n", 'a');
	printf("Expected   : %c\n", 53);
	_printf("Actual     : %c\n", 53);
	printf("Expected   : %c.\n", '\0');
	_printf("Actual     : %c.\n", '\0');
	printf("Expected   : %%%c\n", 'y');
	_printf("Actual     : %%%c\n", 'y');
	printf("=====================\n");
	printf("*****STRINGS*****\n");
	printf("=====================\n");
	alen = elen = 0;
	printf("Expected   : %s\n", "alx");
	_printf("Actual     : %sschool\n", "alx");
	printf("Expected   : %s$\n", "");
	_printf("Actual     : %s$\n", "");
	elen = printf("Expected   : %s\n", str);
	alen = _printf("Actual     : %s\n", str);
	elen = printf("%s", "");
	alen = _printf("%s", "");
	printf("Expected   : %i\n", elen);
	printf("Actual     : %i\n", alen);
	printf("Expected   : %sschool\n", "alx");
	_printf("Actual     : %sschool\n", "alx");
	elen = printf("Expected: %c%%%c%%%%%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);
	alen = _printf("Actual  : %c%%%c%%%%%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);
	printf("Expected: %d\n", elen);
	printf("Actual  : %d\n", alen);
	printf("Expected  %i %d\n", 0032, 0032);
	_printf("Actual %i %d \n", 0032, 0032);
	return (0);

}
