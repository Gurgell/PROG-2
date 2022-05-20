#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int i, d = 0, idade, contjuv = 0, contadulto = 0, contmaster = 0;
	char nome[40];
	
	while (d != 1)
	{
		printf ("Digite o nome do participante: ");
		fflush (stdin);
		fgets (nome, 40, stdin);
		
		printf ("Digite a idade do participante: ");
		scanf ("%d", &idade);
		
		if ((idade >= 10) && (idade <= 17))
		{
			contjuv++;
		}
		else if ((idade>=18)&&(idade<=40))
		{
			contadulto++;
		}
		else
		{
			contmaster++;
		}
		
		printf("Digite 1 para sair do programa ou tecle 0 para continuar: ");
		scanf ("%d", &d);
	}
	
	printf ("\nParticipantes da categoria Juvenil: %d", contjuv);
	printf ("\nParticipantes da categoria Adulto: %d", contadulto);
	printf ("\nParticipantes da categoria Master: %d", contmaster);
}









