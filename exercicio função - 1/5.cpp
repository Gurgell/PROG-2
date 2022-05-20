	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	
		float calculo_area (float comp, float lar)
		{
			return (comp * lar);
		}
	
	main()
	{
		setlocale(LC_ALL, "Portuguese");
		float largura, comprimento;
		
		printf ("Digite o comprimento em metros: ");
		scanf ("%f", &comprimento);
		
		printf ("Digite a largura em metros: ");
		scanf ("%f", &largura);
		
		printf ("A área do terreno é de: %.2fm²", calculo_area (comprimento, largura));
		
	}
