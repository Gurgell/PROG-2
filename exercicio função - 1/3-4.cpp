	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	
	int iddmenor=0, iddmaior=0;
	
	int estatistica_idades (int idd)
	{	
		if (idd < 21)
		{
			iddmenor++;
		}
		else if (idd > 50)
		{
			iddmaior++;
		}
	}
	
	main()
	{
		setlocale (LC_ALL, "Portuguese");
		
		int idade = 1;
		
		while (idade != 0)
		{
			printf ("Digite a idade: ");
			scanf ("%d", &idade);
			estatistica_idades (idade);
		}
		
		printf ("\nO n�mero de pessoas com menos de 21 anos � de: %d\n", iddmenor);
		printf ("O n�mero de pessoas com mais de 50 anos � de: %d", iddmaior);
	}


