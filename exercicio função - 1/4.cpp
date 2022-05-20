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
		
		printf ("Digite o tamanho do tanque de combustível em litros: ");
		scanf ("%f", &tanque);
		
		printf ("Digite quantos quilômetros o carro anda com o tanque cheio até esvaziar: ");
		scanf ("%f", &kmrodado);
		
		printf ("Digite quantos quilômetros terá a sua viagem: ");
		scanf ("%f", &kmviagem);
		
		printf ("O carro irá precisar de: %.2f litros de gasolina para essa viagem", calculo_autonomia (kmrodado, tanque, kmviagem));
	}
