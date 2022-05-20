#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int i = 0, comparamas, comparafem, contmas = 0, contfem = 0, contidade = 0, contdoacao = 0;
float somdoacao = 0;

struct dados_inscricao
	{
		long int cpf=1;
		char nome[40];
		char sexo[10];
		int idade;
		char profissao [50];
		float valordoacao;
	}dados;

	void calculo_quantidade_sexo()
	{
		char mas[10] = "masculino";
		char fem[10] = "feminino";
		comparafem = strcmp(dados.sexo, fem);
		comparamas = strcmp(dados.sexo, mas);
		if (comparamas == 0)
		{
			contmas++;
		}
		if (comparafem == 0)
		{
			contfem++;
		}	
	}
	void calculos_dados()
	{
		if (dados.idade > 60)
		{
			contidade++;
		}
		
		if (dados.valordoacao > 1000)
		{
			contdoacao++;	
		}
		somdoacao = somdoacao + dados.valordoacao;
	}
	
main()
{
	setlocale (LC_ALL, "Portuguese");
	while (dados.cpf != 0)
	{
		fflush(stdin);
		printf ("Digite seu nome: ");
		fgets (dados.nome, 40, stdin);
		fflush(stdin);
		
		printf ("Digite seu sexo: ");
		fgets (dados.sexo, 10, stdin);
		calculo_quantidade_sexo();
		
		printf ("Digite sua idade: ");
		scanf ("%i", &dados.idade);
		
		fflush(stdin);
		printf ("Digite sua profissão: ");
		fgets (dados.profissao, 50, stdin);
		
		printf ("Digite o valor da doação: ");
		scanf ("%f", &dados.valordoacao);	
		fflush(stdin);
		printf ("Digite seu cpf: ");
		scanf ("%li", &dados.cpf);
		
		calculos_dados();
		printf ("\n");
		fflush(stdin);
	}
	printf ("\nExistem %d homens inscritos", contmas);
	printf ("\nExistem %d mulheres inscritas", contfem);
	printf ("\nQuantidade de pessoas acima de 60 anos: %d", contidade);	
	printf ("\nQuantidade de pessoas que doaram mais de 1000R$: %d", contdoacao);
	printf ("\nO valor total arrecadado foi de: %.2fR$", somdoacao);		
}
