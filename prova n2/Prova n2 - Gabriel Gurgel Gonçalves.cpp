#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int contdol = 0, contmas = 0, contfem = 0;
float tot = 0;

typedef struct inscricao_maratona
{
	char nome[40];
	int sexo, moeda, idade;	
}inscricao;

// Função com passagem por referência
void calculo_moeda (int *moeda)
{
	float  real, dolar, peso;
	real = 100;
	dolar = 100 / 5.67;
	peso = 100 / 0.090;
	
	tot = tot + real;
	
	if (*moeda == 1)
	{
		printf ("Moeda escolhida: Dólar\n");
		printf ("Valor da inscrição: %.2fU$\n\n", dolar);
		contdol++;
	}
	else if (*moeda == 2)
	{
		printf ("Moeda escolhida: Peso argentino\n");
		printf ("Valor da inscrição: %.2f$\n\n", peso);
	}
	else if (*moeda == 3)
	{
		printf ("Moeda escolhida: Real\n");
		printf ("Valor da inscrição: %.2fR$\n\n", real);
	}
}

// Função com passagem por valor
void calculo_sexo(int sexo)
{
	if (sexo == 1)
	{
		contmas++;
	}
	else if (sexo == 2)
	{
		contfem++;
	}
}

main()
{
	setlocale(LC_ALL,"Portuguese");
	inscricao atleta;
	int contnum = 0;
	
	int *moeda;
	moeda =  &atleta.moeda;
	
	printf ("Digite o seu nome ou sair para encerrar o programa: ");
	gets (atleta.nome);
	
	
	while(strcmp(strupr(atleta.nome),"SAIR")!=0)
	{	
		fflush(stdin);
		contnum++;
		printf ("Digite o seu sexo: [1] para homem e [2] para mulher: ");
		scanf ("%d", &atleta.sexo);
		fflush(stdin);
		printf ("Digite a sua idade: ");
		scanf ("%d", &atleta.idade);
		fflush(stdin);
		printf ("Digite a moeda que deseja usar para realizar o pagamento: [1]Dólar, [2]Peso argentino ou [3]Real: ");
		scanf ("%d", &atleta.moeda);
		fflush(stdin);
		printf ("\n");
		fflush(stdin);
		printf ("Número do atleta: %d\n", contnum);
		fflush(stdin);
		printf ("Nome: %s\n", atleta.nome);
		fflush(stdin);
		calculo_moeda(&atleta.moeda);
		calculo_sexo(atleta.sexo);
		fflush(stdin);
		printf ("Digite o seu nome: ");
		gets (atleta.nome);
		fflush(stdin);
	}
	
	printf ("\n====================================================================================================\n");
	printf ("Quantidade de homens inscritos: %d", contmas);
	printf ("\nQuantidade de mulheres inscritas: %d", contfem);
	printf ("\nQuantidade atletas que pagaram em Dólar: %d", contdol);
	printf ("\nO total arrecadado em reais na inscrição foi de: %.2fR$\n\n\n", tot);
}
