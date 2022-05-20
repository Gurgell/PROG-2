#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main (void)
{
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	struct levantamento
	{
	    char codimv[20];
		char bairro[20];
		char tipo[15];
		int moradores;
		char interesse[7];
		char rede[8];
		float conmes;
		float conmor;
		
	}levant[127];
	
	int i,mat=199,bai,tp,inte,rd,conbot;
	float maiorconsu=0;
	char maiorconsumo[60];
	
    printf ("Código\tbairro\t\tTipo\t\tMoradores\tInteresse\tRede\t\tConMês\tConMo\n");
    
	for (i=0; i<127; i++)
	{
		mat++;
		bai=(rand()%3)+1;
		tp=rand()%2;
		levant[i].moradores=(rand()%7)+1;
		inte=rand()%3;
		rd=rand()%2;
		conbot=(rand()%19)+6;
		levant[i].conmes=(float)conbot/12;
		levant[i].conmor=levant[i].conmes/levant[i].moradores;
		
		if (bai==1)
		{
		    strcpy (levant[i].bairro,"Visconde  ");
		    sprintf (levant[i].codimv,"%dVIS",mat);
		}
		else if (bai==2)
		{
			strcpy (levant[i].bairro,"Imboassica");
		    sprintf (levant[i].codimv,"%dIMB",mat);
		}
		else
		{
			strcpy (levant[i].bairro,"Aeroporto ");
		    sprintf (levant[i].codimv,"%dAER",mat);
		}
		
		if (tp==0)
		{
			strcpy (levant[i].tipo,"Casa       ");
		}
		else 
		{
			strcpy (levant[i].tipo,"Apartamento");
		}
		
		if (inte==0)
		{
			strcpy (levant[i].interesse,"Não   ");
		}
		else if (inte==1)
		{
			strcpy (levant[i].interesse,"Sim   ");
		}
		else
		{
			strcpy (levant[i].interesse,"Talvez");
		}
		
		if (rd==0)
		{
		    strcpy(levant[i].rede,"Existe    ");	
		}
		else
		{
			strcpy(levant[i].rede,"Não existe");
		}
		
		if (levant[i].conmes>maiorconsu)
		{
			maiorconsu=levant[i].conmes;
			sprintf (maiorconsumo,"%s\t%s\t%s\t%d\t\t%s\t\t%s\t%.2f\t%.2f",levant[i].codimv,levant[i].bairro,levant[i].tipo,levant[i].moradores,levant[i].interesse,levant[i].rede,levant[i].conmes,levant[i].conmor);
		}
		
		printf ("%s\t%s\t%s\t%d\t\t%s\t\t%s\t%.2f\t%.2f\n",levant[i].codimv,levant[i].bairro,levant[i].tipo,levant[i].moradores,levant[i].interesse,levant[i].rede,levant[i].conmes,levant[i].conmor);
	}
	printf ("==================================================================\n");
	
	printf ("O pesquisado de maior consumo com seus dados: %f\n",maiorconsu);
	printf ("%s",maiorconsumo);
}
