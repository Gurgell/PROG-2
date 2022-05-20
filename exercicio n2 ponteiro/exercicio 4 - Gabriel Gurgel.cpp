#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#define alunos 5

float tot;
int qtdap = 0, qtdrep = 0;

typedef struct turma_prog
{
	int matricula;
	char nome[40], curso[40];
	float notaprova, notatrab, notaparti;
}turma_progii;

void calculo_nota(float *pnotat, float *pnotap, float *pnotaparti)
{
	tot = *pnotat + *pnotap + *pnotaparti;
	printf ("A sua nota foi de: %.2f\n\n", tot);
}

void calculo_aprovado(float nota)
{
	if (nota >= 7)
	{
		qtdap++;
	}
	else
	{
		qtdrep++;
	}
}

main()
{
	setlocale(LC_ALL,"Portuguese");
	int i;
	float *pnotap, *pnotat, *pnotaparti;
	turma_progii turma[alunos];
	
	for (i = 0; i < 2; i++)
	{
		fflush(stdin);
		printf ("Digite a sua matricula: ");
		scanf ("%d", &turma[i].matricula);
		fflush(stdin);
		printf ("Digite o seu nome: ");
		fgets (turma[i].nome, 40, stdin);
		fflush(stdin);
		printf ("Digite o seu curso: ");
		fgets (turma[i].curso, 40, stdin);
		fflush(stdin);
		printf ("Digite a sua nota do trabalho(Máximo de 3 pts): ");
		scanf ("%f", &turma[i].notatrab);
		fflush(stdin);
		printf ("Digite a sua nota da prova(Máximo de 6 pts): ");
		scanf ("%f", &turma[i].notaprova);
		fflush(stdin);
		printf ("Digite a sua nota de participação(Máximo de 1 ponto): ");
		scanf ("%f", &turma[i].notaparti);
		fflush(stdin);
		calculo_nota(&turma[i].notatrab, &turma[i].notaprova, &turma[i].notaparti);
		calculo_aprovado(tot);
	}
	printf ("\nA quantidade de aprovados foi de: %d", qtdap);
	printf ("\nA quantidade de reprovados foi de: %d\n", qtdrep);
}
