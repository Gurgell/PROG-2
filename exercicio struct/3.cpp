#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int sair = 1, i = 0;

struct pacientes
{
	char nome[40];
	char sexo[10];
	float peso;
	float altura;
}paciente;

void calculo_imc(float peso, float altura)
{
	float imc;
	imc = peso/(altura*altura);
	
	if (imc < 18.5)
	{
		printf ("Seu imc é de: %.2f e está abaixo do peso", imc);
	}
	else if ((imc >= 18.6)&&(imc < 25))
	{
		printf ("Parabéns! Seu imc é de: %.2f e você está no peso ideal", imc);
	}
	else if ((imc >= 25)&&(imc < 30))
	{
		printf ("Seu imc é de: %.2f e está levemente acima do peso", imc);
	}
	else if ((imc >= 30)&&(imc < 35))
	{
		printf ("Seu imc é de: %.2f e está com obesidade grau 1", imc);
	}
	else if ((imc >= 35)&&(imc < 40))
	{
		printf ("Seu imc é de: %.2f e está com obesidade grau 2 (severa)", imc);
	}
	else
	{
		printf ("Seu imc é de: %.2f e está com obesidade grau 3 (mórbida)", imc);
	}
}

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	while(sair != 0)
	{
		i++;
		fflush(stdin);
		printf ("Digite o nome do paciente: ");
		fgets (paciente.nome[i], 40, stdin);
		
		fflush(stdin);
		printf ("Digite o sexo do paciente: ");
		fgets (paciente.sexo, 10, stdin);
		
		fflush(stdin);
		printf ("Digite o peso do paciente: ");
		scanf ("%f", &paciente.peso[i]);
	
		fflush(stdin);
		printf ("Digite a altura do paciente: ");
		scanf ("%f", &paciente.altura);
		printf ("\n");
		calculo_imc(paciente.peso, paciente.altura);
		printf ("\n");
		
		fflush(stdin);
		printf ("Digite 0 para encerrar o programa, caso contrário digite 1: ");
		scanf ("%d", &sair);
	}
	
	for (j = 0; j < i; j++)
	{
		printf ("Nome: %s")
	}
}
