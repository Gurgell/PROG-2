	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	#include <string.h>
	
	int calculo_caracteres (char n[40])
	{
		int cont = 0;
		cont = strlen (n) - 1;
		return (cont);
	}
	
	main()
	{
		setlocale (LC_ALL, "Portuguese");
		char nome[40];
		
		printf ("Digite o seu nome: ");
		fflush (stdin);
		fgets (nome, 40, stdin);
		
		printf ("A quantidade de caracteres no nome é de: %d", calculo_caracteres (nome));
		
	}
	
