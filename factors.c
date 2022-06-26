#ifndef MAIN_H
#define MAIN_H

int _factorize(int a);

#endif

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

	for (i = 2; i <= a; i++)
	{
		for (j = 2; j <= a; j++)
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

#include <stdio.h>

/**
 * main - Test the code
 *
 * Return: Nothing
 */
int main()
{
	_factorize(4);
	_factorize(12);
	_factorize(34);
	_factorize(1718944270642558716715);
	_factorize(9);
	_factorize(99);
	_factorize(999);
	_factorize(9797973);
	_factorize(49);
	_factorize(239809320265259);

	return (0);
}
