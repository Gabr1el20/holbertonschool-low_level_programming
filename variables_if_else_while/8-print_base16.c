#include <stdio.h>

/**
 *	main - Entry point
 *
 *	Return: Always 0 (success)
 *
 */

	int main(void)
{
	int numero;
	char letra;

	for (numero = 0; numero < 10; numero++)
		putchar((numero % 10) + '0');

	for (letra = 'a'; letra <= 'f'; letra++)
		putchar(letra);

	putchar('\n');
	return (0);
}
