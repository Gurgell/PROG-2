	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	
		float calculo_autonomia (float kmr, float tan, float kmv)
		{
			return (kmv/(kmr/tan));
		}
	
	main()
	{
		setlocale (LC_ALL,"Portuguese");
		float tanque, kmrodado, kmviagem;
		
		printf ("Digite o tamanho do tanque de combust�vel em litros: ");
		scanf ("%f", &tanque);
		
		printf ("Digite quantos quil�metros o carro anda com o tanque cheio at� esvaziar: ");
		scanf ("%f", &kmrodado);
		
		printf ("Digite quantos quil�metros ter� a sua viagem: ");
		scanf ("%f", &kmviagem);
		
		printf ("O carro ir� precisar de: %.2f litros de gasolina para essa viagem", calculo_autonomia (kmrodado, tanque, kmviagem));
	}
