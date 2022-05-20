#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#define pessoas 150

float totdoacao;
int qtdh = 0, qtdm = 0, qtdidade = 0, qtdoacao = 0;

typedef struct EAD
{
	long int cpf;
	char nome[50];
	int sexo;
	int idade;
	char profissao[40];
	float doacao;
}inscricao_ead;

void calculos_ead (int *psexo, int *pida, float *pvalor)
{
	if (*psexo == 1)
	{
		qtdh++;
	}
	else if (*psexo == 2)
	{
		qtdm++;
	}
	
	if (*pida > 60)
	{
		qtdidade++;
	}
	
	if (*pvalor > 50)
	{
		qtdoacao++;
	}
	
	totdoacao = *pvalor + totdoacao;
}

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	int *pida, *psexo;
	float *pvalor;
	inscricao_ead ead[pessoas];
	for (i = 0; i < pessoas; i++)
	{
		fflush(stdin);
		printf ("Digite o seu cpf: ");
		scanf ("%li", &ead[i].cpf);
		fflush(stdin);
		printf ("Digite o seu nome: ");
		fgets (ead[i].nome, 50, stdin);
		fflush(stdin);
		printf ("Digite 1 se for homem e 2 se for mulher: ");
		scanf ("%d", &ead[i].sexo);
		fflush(stdin);
		printf ("Digite a idade: ");
		scanf ("%d", &ead[i].idade);
		fflush(stdin);
		printf ("Digite a sua profissão: ");
		fgets (ead[i].profissao, 40, stdin);
		fflush(stdin);
		printf ("Digite o valor da sua doação: ");
		scanf ("%f", &ead[i].doacao);
		fflush(stdin);
		calculos_ead(&ead[i].sexo, &ead[i].idade, &ead[i].doacao);
		printf ("\n");
	}
	printf ("\nQuantidade de homens: %d\n", qtdh); 
	printf ("Quantidade de mulheres: %d\n", qtdm);
	printf ("Quantidade de pessoas acima de 60 anos: %d\n", qtdidade);
	printf ("Quantidade de pessoas que doaram acima de 50 reais: %d\n\n", qtdoacao);
	printf ("O total arrecadado foi de: %.2f", totdoacao);
}
