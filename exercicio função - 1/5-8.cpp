	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	#include <string.h>
	
	int calculo_caracteres_a (char n[40])
	{
		int cont = 0, i, conta = 0;
		cont = strlen (n) - 1;
		
		for (i = 0 ; i <= cont; i++)
		{
			switch (n[i])
			{
				case 'a':
				case 'A':
				conta++;
			}
		}
		return (conta);
	}
	
	main()
	{
		setlocale (LC_ALL, "Portuguese");
		char nome[40];
		
		printf ("Digite o seu nome: ");
		fflush (stdin);
		fgets (nome, 40, stdin);
		
		printf ("A quantidade de letras a no seu nome é de: %d", calculo_caracteres_a(nome));
	}
