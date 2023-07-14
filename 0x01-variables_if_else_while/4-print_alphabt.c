#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char chr = 'a';

	while (chr <= 'z')
	{
		if (chr != 'e' && chr != 'q')
		{
			putchar(chr);

		}
		chr++;

	}
	putchar('\n');
	return (0);
}

