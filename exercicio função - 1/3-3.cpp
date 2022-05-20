	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	#include <time.h>
				
		int numeros[10];
				
		int calculo_menorn ()
		{
			srand (time(NULL));
			int i, menornumero = 1000;
				
			for (i=0; i<10; i++)
			{
				numeros[i] = rand()%1000;
						
				if (menornumero > numeros[i])
				{
					menornumero = numeros[i];
				}
			} 
		return (menornumero);
		}
			
				
		main()
		{
			srand (time(NULL));
			setlocale (LC_ALL, "Portuguese");
				
			int i;
				
			calculo_menorn();
				
			printf ("Os dez números inteiros são: \n");
			for (i=0; i<10; i++)
			{
				printf ("%d\n", numeros[i]);
			}
				
			printf ("\nO menor entre eles é: %d", calculo_menorn());
		}
