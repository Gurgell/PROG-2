#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	
	struct Bomsabor
	{
		char produto[15];
		float valor;
		
	}itens[150];
	
	int i,p;
	float maiscaro=0,mediaprec,soma=0;
	char pmc[40];
	
	printf ("Produto\t  Valor\n");
	for (i=0; i<150; i++)
	{
		p=rand()%3;
		if (p==0)
		{
			strcpy(itens[i].produto,"Coxinha");
			itens[i].valor=4.50;
			soma=soma+itens[i].valor;
		}
		else if (p==1)
		{
			strcpy(itens[i].produto,"Quibe  ");
			itens[i].valor=4.20;
			soma=soma+itens[i].valor;
		}
		else 
		{
			strcpy(itens[i].produto,"Joelho ");
			itens[i].valor=4.00;
			soma=soma+itens[i].valor;
		}
		
		if (maiscaro<itens[i].valor)
		{
			sprintf (pmc,"%s %.2f",itens[i].produto,itens[i].valor);
		}
		
		printf ("%s\t  %.2f\n",itens[i].produto,itens[i].valor);
	}
	
	printf ("=============================================================");
	printf ("\nO produto mais caro é: %s\n",pmc);
	printf ("O valor total de todos os produtos da cantina é de: %.2f\n",soma);
	
	mediaprec=12.70/3;
	printf ("A média de preço da loja é de: %.2f",mediaprec);
	
}
