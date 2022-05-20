#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int cont = 0, contcarro = 0;

struct dados_veiculo
{
	char placa[10];
	char nomepropr[40];
	char categoria[20];
	char tipolavagem[20];
	float valor;
}dados;

void calculo_carro(float valor)
{
	if (valor == 45)
	{
		contcarro++;
	}
}

main()
{
	setlocale (LC_ALL, "Portuguese");
	while (strcmp(strupr(dados.placa), "SAIR") != 0)
	{
		cont++;
		fflush(stdin);
		printf ("Digite o nome do proprietário: ");
		fgets (dados.nomepropr, 40, stdin);
		fflush(stdin);
		
		printf ("Digite a categoria: ");
		fgets (dados.categoria, 20, stdin);
		
		printf ("Digite o tipo de lavagem: ");
		fgets (dados.tipolavagem, 20, stdin);
		
		fflush(stdin);
		printf ("Digite o valor: ");
		scanf ("%f", &dados.valor);
		calculo_carro(dados.valor);
		fflush(stdin);
		
		printf ("Digite a placa ou digite sair para encerrar: ");
		fgets (dados.placa, 10, stdin);	
		
		
		printf ("\nPLACA: %s", dados.placa);
		printf ("CATEGORIA: %s", dados.categoria);
		printf ("TIPO LAVAGEM: %s", dados.tipolavagem);
		printf ("VALOR A PAGAR: %.2fR$\n\n", dados.valor);
		fflush(stdin);
	}
	printf ("\n\n");
	printf ("O total de lavagens foi de: %d", cont);
	printf ("\nO total de carros que fizeram lavagenm geral foi de: %d", contcarro);
}
