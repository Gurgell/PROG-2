#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	int i;
	float s[5],soma;
	
	for (i=0;  ; i++)
	{
		printf ("Digite o sal�rio: ");
		scanf ("%f",&s[i]);
		
		if (s[i]==0)
		{
			break;
		}
		
		soma=s[i]+soma;
		printf ("\nA soma � de: \n%.2fR$\n\n",soma);
	}
}
