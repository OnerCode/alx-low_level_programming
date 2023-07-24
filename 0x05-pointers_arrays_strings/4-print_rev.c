#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int revers = 0;
	int r;

	while (*s != '\0')
	{
		revers++;
		s++;
	}
	s--;
	for (r = revers; r > 0; r--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
