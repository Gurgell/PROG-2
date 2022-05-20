#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int i, j;
float peso[3][4], pesolb[3][4];

float conversor_libra(float peso)
{
	pesolb[i][j] = peso / 0.454;
	printf ("Peso em libras: %.3flb\n\n", pesolb[i][j]);
}

main()
{
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf ("Digite o peso em kg: ");
			scanf ("%f", &peso[i][j]);
			printf ("Peso em kg: %.2fkg\n", peso[i][j]);
			conversor_libra(peso[i][j]);
		}
	}	
}
