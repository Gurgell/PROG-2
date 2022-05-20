#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	
	int i,s;
	char n[15];
	
	printf ("Digite seu nome: \n");
	gets (n);
	
	printf ("Digite 1 para sexo masculino e 2 pra feminino \n");
	scanf ("%d",&s);
	
	printf ("Digite sua idade: \n");
	scanf("%d",&i);
	
	if ((s==2)&&(i<25))
	{
		printf ("\n%s aceita",n);
	}
	else
	{
		printf ("\nNão aceita");
	}
}
