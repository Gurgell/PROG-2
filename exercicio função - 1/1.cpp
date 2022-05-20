	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	
	float media_aritmetica (float n1, float n2, float n3)
	{
		return ((n1 + n2 + n3)/ 3);
	}
	
	main()
	{
		setlocale(LC_ALL, "Portuguese");
		
		float nota1, nota2, nota3;
		char nome[50];
		
		printf ("Digite seu nome: \n");
		gets (nome);
		
		printf ("\nDigite sua nota da n1: \n");
		scanf ("%f", &nota1);
		printf ("Digite sua nota da n2: \n");
		scanf ("%f", &nota2);
		printf ("Digite sua nota da n3: \n");
		scanf ("%f", &nota3);
		
		printf ("\n\n%s, sua média aritmética é de: %.2f", nome, media_aritmetica (nota1, nota2, nota3));
	}
