#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int qtdvdd;

void calculo_venda(float tot)
{
	if (tot > 50000)
	{
		qtdvdd++;
	}
}

void calculo_bonus (float *pvenda, float *psalario)
{
	if (*pvenda <= 5000)
	{
		*psalario = *psalario + 100;
		printf ("\nO seu salário com bonus é de: %.2f\n", *psalario);
	}
	else if ((*pvenda > 5000)&&(*pvenda <= 10000))
	{
		*psalario = *psalario + 300;
		printf ("\nO seu salário com bonus é de: %.2f\n", *psalario);
	}
	else if ((*pvenda > 10000)&&(*pvenda <= 50000))
	{
		*psalario = *psalario + 500;
		printf ("\nO seu salário com bonus é de: %.2f\n", *psalario);
	}
	else
	{
		*psalario = *psalario + 1000;
		printf ("\nO seu salário com bonus é de: %.2f\n", *psalario);
	}	
}

main()
{
	setlocale(LC_ALL,"Portuguese");
	long int matricula;
	float salario, totvenda;
	float *pvenda, *psalario;
	
	
	printf ("Digite a sua matricula: ");
	scanf ("%li", &matricula);
	while (matricula != 0)
	{
		fflush(stdin);
		printf ("Digite o seu salario: ");
		scanf ("%f", &salario);
		fflush(stdin);
		printf ("Digite o seu total de vendas: ");
		scanf ("%f", &totvenda);
		fflush(stdin);
		calculo_venda(totvenda);
		calculo_bonus(&totvenda, &salario);
		printf ("\nDigite a sua matricula: ");
		scanf ("%li", &matricula);
	}
	printf ("\nA quantidade de vendedores que venderam acima de 50.000 foi de: %d",  qtdvdd);
	
}
