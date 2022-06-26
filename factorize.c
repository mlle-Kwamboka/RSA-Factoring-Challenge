#include <stdio.h>
#include "main.h"

/**
 * _factorize - factorizes a number
 * @a: the number to factorize
 *
 * Return: Factors
 */
int _factorize(int a)
{
	int i, j, k, l, m;

	for (i = 0; i <= a; i++)
	{
		for (j = 0; j <= a; j++)
		{
			k = j / 2;
			
			for (l = 2; l < k; l++)
			{
				if (j % l != 0)
				{
					m = i / j;
					printf("%d = %d * %d\n", i, m, j);
				}
			}
		}
	}
	return
}
