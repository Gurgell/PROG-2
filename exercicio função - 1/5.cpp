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
		
		printf ("A �rea do terreno � de: %.2fm�", calculo_area (comprimento, largura));
		
	}
