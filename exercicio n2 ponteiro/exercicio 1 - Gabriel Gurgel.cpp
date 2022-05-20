#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

void calculo_area(float *l, float *c)
{
	float resultado;
	resultado = *l * *c;
	printf ("A área do terreno é de: %.2fm²", resultado);
}

main()
{
	setlocale(LC_ALL,"Portuguese");
	float largura, *l, comprimento, *c;
	
	printf ("Digite o valor da largura do terreno: ");
	scanf ("%f", &largura);
	printf ("Digite o valor do comprimento do terreno.: ");
	scanf ("%f", &comprimento);
	
	calculo_area(&largura, &comprimento);
}
