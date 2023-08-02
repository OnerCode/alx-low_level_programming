#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: the string input
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int word = 0;

	if (*S)
	{
		word++;
		word += _strlen_recursion(s + 1);

	}
	return (word);

}
