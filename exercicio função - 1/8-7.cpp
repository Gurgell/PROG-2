#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

float conversor_dolar (float salar)
{
	return (salar/3.52);
}

main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int matricula = 1;
	float salario, somasala = 0;
	
	while (matricula != 0)
	{
		somasala = somasala + salario;
		printf ("Digite a sua matricula: ");
		scanf ("%d", &matricula);
		
		printf ("Digite o sal�rio: ");
		scanf ("%f", &salario);	
	} 
	
	printf ("\nO total dos sal�rios em real � de: %.2f ", somasala);
	printf ("\nO total dos sal�rios em d�lar � de: %.2f", conversor_dolar(somasala));
}
