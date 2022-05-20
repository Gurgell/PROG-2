#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	
	float n1,n2,n3,notas[3],media;
	
    printf ("Digite sua nota da n1: \n");
    scanf ("%f",&n1);
    notas[0]=n1;
    
    printf ("Digite sua nota da n2: \n");
    scanf ("%f",&n2);
    notas[1]=n2;
    
    printf ("Digite sua nota da n3: \n");
    scanf ("%f",&n3);
    notas[2]=n3;
    
    media=(n1+n2+n3)/3;
    printf ("\nA média aritmética de suas notas é de: %.2f",media);
    
}
