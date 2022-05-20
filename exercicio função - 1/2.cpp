	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	
	float calculo_salario (float sal)
	{
	return ((10 * sal / 100) + sal);
	}
	
	main()
	{
		setlocale(LC_ALL, "Portuguese");
		
		char nome[50];
		float salario;
		
		printf ("Digite seu nome: ");
		gets (nome);
		
		printf ("Digite seu salário: ");
		scanf ("%f", &salario);
		
		printf ("\n\n%s, o seu salário com ascréscimo de 10%% é de: %.2f", nome, calculo_salario(salario));
	}
