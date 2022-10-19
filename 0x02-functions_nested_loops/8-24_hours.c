#include "main.h"
/**
 *jack_bauer - prints every minure of the day.
 *Return:0
 **/

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(':');

			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
				}
				_putchar('\n');
			}
		}
	}
}
