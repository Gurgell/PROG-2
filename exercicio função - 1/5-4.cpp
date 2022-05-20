	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	
	int senha;
	
	int validar_senha (int password)
	{
		setlocale (LC_ALL, "Portuguese");
		if (senha==password)
		{
			printf ("Bem vindo!");
		}
		else 
		{
			printf ("A senha digitada está incorreta.");
		}
		
	}
	
	main()
	{
		setlocale (LC_ALL, "Portuguese");
		int snh, cpf;
		char nome[40], email[40];
		
		printf ("Digite seu cpf: ");
		scanf ("%d", &cpf);
	
		fflush(stdin);
		
		printf ("Digite seu email ");
		fgets (email, 40, stdin);
		
		printf ("Digite seu nome ");
		fgets (nome, 40, stdin);
		
		printf ("Digite sua senha: ");
		scanf ("%d", &senha);
		
		printf ("Para fazer o login, digite sua senha novamente: ");
		scanf ("%d", &snh);
		validar_senha (snh);		
	}
