#include "main.h"

/*
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz"
	int i;
	for (i = 0; i < 26; i++)

	{
		_putchar(alphabet[i]);
	}

	         _putchar('\n');
}
