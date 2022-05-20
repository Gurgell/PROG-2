#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int cont = 0;
char nome[16][30], nomemaior[40], nomemenor[40];
float altura[4][4], som = 0, maioraltura = 0, menoraltura = 5, med;

float calculo_alturas(float alt)
{
	if (alt > maioraltura)
	{
		maioraltura = alt;
		strcpy (nomemaior, nome[cont]);
	}
	
	if (alt < menoraltura)
	{
		menoraltura = alt;
		strcpy (nomemenor, nome[cont]);
	}
	
	som = som + alt;
}


main()
{
	setlocale (LC_ALL, "Portuguese");
	int i, j;
	
	for (i = 0; i < 16; i++)
	{
		printf ("Digite o nome do atleta: ");
		scanf ("%s", &nome[i]);
	}
	printf ("==================================================\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf ("Digite a altura do atleta: ");
			scanf ("%f", &altura[i][j]);
			calculo_alturas(altura[i][j]);
			cont++;
		}
	}
	
	printf ("\n\nO atleta mais baixo se chama %s e tem %.2f\n", nomemenor, menoraltura);
	printf ("O atleta mais alto se chama %s e tem %.2f\n", nomemaior, maioraltura);
	med = som / 16;
	printf ("A média de altura dos atletas é de: %.2f", med);
}









