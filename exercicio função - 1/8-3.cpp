#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
	
struct cadastro
{
	char nome [40];
	float nota [2];
	char situacao [20];
} aluno [28];
	
float calculo_nota (float n1, float n2)
{
	int i;
		
	for (i = 0; i<28; i++)
	{
		if (((n1+n2)/2)>=7)
		{
			strcpy (aluno[i].situacao, "Aprovado");
			
		}
		else
		{	
				strcpy (aluno[i].situacao, "Reprovado");
		}
	}
}
	
	
main()
{
	int i;
		
	for (i=0; i<28; i++)
	{
		printf ("Digite o nome do aluno: ");
		fflush (stdin);
		fgets (aluno[i].nome, 40, stdin);
		
		printf ("Digite a nota 1 de %s ", aluno[i].nome);
		scanf ("%f", &aluno[i].nota[0]);
		
		printf ("Digite a nota 2 de %s ", aluno[i].nome);
		scanf ("%f", &aluno[i].nota[1]);
			
		calculo_nota(aluno[i].nota[0], aluno[i].nota[1]);
		printf ("%s\n\n", aluno[i].situacao);
	}	
}
