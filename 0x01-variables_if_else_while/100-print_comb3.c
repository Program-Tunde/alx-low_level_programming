#include <stdio.h>
/**
 * main - prints the combination of two numbers.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int num1, num2;

	for (num1 = 48; num1 <= 56; num1++)
	{
		for (num2 = 49; num2 <= 57; num2++)
		{
			if (num1 < num2)
			{
				putchar(num1);
				putchar(num2);

				if (num1 != 56 || num2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

