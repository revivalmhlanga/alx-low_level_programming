#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: the used string reference pointer
 * Return: 0
 */

void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
		
	}
	S--;
	for (o = longi; o > 0; O--)
	{
		_putchar(*s);
		S--;
	}
	_putchar('\n');
}
