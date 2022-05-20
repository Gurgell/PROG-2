	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	
	float calculo_desconto (float valor)
	{
	    return (valor - (( 25 * valor) / 100));
	}
	
	main()
	{
		setlocale(LC_ALL, "Portuguese");
		
		int cod;
		float preco;
		
		printf ("Digite o código do produto: ");
		scanf ("%d", &cod);
		
		printf ("Digite o preço do produto: ");
		scanf ("%f", &preco);
		
		printf ("O valor do produto de código %d com desconto de 25%% é de: %.2f", cod, calculo_desconto(preco));
		
	}
