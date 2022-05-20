#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

char masculino[30], feminino[30];
int contmas = 0, contfem = 0;

struct cadastro
{
	char nome[40];	
	int idade;
	char sexo[15];
}cad[30];

get_sex(char sx[15])
{
	strcpy(masculino, "Masculino");
	strcpy(feminino, "Feminino");
	if (strcmp(sx, masculino))
	{
		contmas++;
	}
	else if (strcmp(sx, feminino))
	{
		contfem++;
	}
}

main()
{
	setlocale (LC_ALL, "Portuguese");
	int i, idademaior = 0;
	char nomemaisvelho[40];

	for (i = 0; i < 2; i++)
	{
		fflush (stdin);
		
		printf ("Digite o nome: ");
		fgets (cad[i].nome, 40, stdin);
		
		fflush (stdin);
		
		printf ("Digite a idade: ");
		scanf ("%d", &cad[i].idade);
		
		if (idademaior < cad[i].idade)
		{
			strcpy (nomemaisvelho, cad[i].nome);
			idademaior = cad[i].idade;
		}
		
		fflush (stdin);
		
		printf ("Digite o sexo: ");
		fgets (cad[i].sexo, 10, stdin);
		get_sex(cad[i].sexo);
		printf ("\n");
	}
	printf ("\nA pessoa mais velha do grupo é: %s", nomemaisvelho);
	printf ("Essa pessoa tem: %d anos\n", idademaior);
	printf ("Há um total de %d homens\n", contmas);
	printf ("Há um total de %d mulheres", contfem);
}
