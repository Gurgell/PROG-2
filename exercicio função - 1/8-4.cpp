#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

struct fabricante
{
	float cod;
	float valor;
	char tipo[20];
}fabri[130];

float valormaior = 0, codmaior;
char ter[30];
int contter = 0;

void calculo_valor(float valor, int codigo)
{
	if (valor > valormaior)
	{
		valormaior = valor;
		codmaior = codigo;
	}
}
void equipamento_terrestre(char type[40])
{
	strcpy (ter, "Terrestre");
	if (strcmp(ter,type))
	{	
		contter++;
	}
}

main()
{
	setlocale (LC_ALL, "Portuguese");
	int i;
	
	strcpy (ter, "Terrestre");
	
	for (i = 0; i < 130; i++)
	{
		printf ("Digite o código do equipamento: ");
		scanf ("%f", &fabri[i].cod);
		fflush(stdin);
		printf ("Digite o tipo do equipamento: ");
		fgets (fabri[i].tipo, 20, stdin);
		printf ("Digite o valor do equipamento: ");
		scanf ("%f", &fabri[i].valor);
		calculo_valor(fabri[i].valor, fabri[i].cod);
		equipamento_terrestre(fabri[i].tipo);
		printf ("\n");
		
	}
	
	printf ("\n\nO código do mais caro é: %.0f e o valor dele é de: %.2fR$\n", codmaior, valormaior);
	printf ("A quantidade de equipamentos terrestres é de: %d", contter);
	
}




