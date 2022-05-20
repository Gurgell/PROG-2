#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	
	float c,l,a;
	
	printf ("Digite o comprimento: \n");
	scanf ("%f",&c);
	printf ("Digite a largura: \n");
	scanf ("%f",&l);
	
	a=c*l;
	
	printf ("\nArea: %.2f",a);
}
