#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int i, contidd = 0, maioridade;
float maiornota = 0;
char maiornome[40];

struct matricula_alunos
{
	char nome[40], sexo;
	int curso, idade;
	float nota;
}matricula[312];

void calculo_maior (float nota, char nome[40], int idade)
{
	if (maiornota < nota)
	{
		maiornota = nota;
		maioridade = idade;
		strcpy (maiornome, nome);
	}
	
	if (idade > 25)
	{
		contidd++;
	}
}

main()
{
	setlocale (LC_ALL,"Portutugese");
	
	for (i = 0; i < 312; i++)
	{
		fflush(stdin);
		printf ("Digite o nome do aluno: ");
		fgets (matricula[i].nome, 40, stdin);
		fflush(stdin);
		printf ("Informe o sexo, [1] para masculino e [2] para feminino: ");
		scanf ("%c", &matricula[i].sexo);
		fflush(stdin);
		printf ("Informe o curso do aluno, digite [1] para ADM, [2] para ENG, [3] para SI: ");
		scanf ("%d", &matricula[i].curso);
		fflush(stdin);
		printf ("Digite a nota do aluno: ");
		scanf ("%f", &matricula[i].nota);
		fflush(stdin);
		printf ("Digite a idade do aluno: ");
		scanf ("%d", &matricula[i].idade);
		fflush(stdin);
		calculo_maior (matricula[i].nota, matricula[i].nome, matricula[i].idade);
		printf ("\n");
		fflush(stdin);
	}
	printf ("Aluno que ficou em primeiro lugar: %s",maiornome);
	printf ("Idade do aluno que ficou em primeiro lugar: %d\n", maioridade);
	printf ("Quantidade de alunos com mais de 25 anos: %d", contidd);
}
