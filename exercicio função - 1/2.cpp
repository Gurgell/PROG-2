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
		
		printf ("Digite seu sal�rio: ");
		scanf ("%f", &salario);
		
		printf ("\n\n%s, o seu sal�rio com ascr�scimo de 10%% � de: %.2f", nome, calculo_salario(salario));
	}
