#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int precosa, precorefri = 0;

struct endereco_entrega
{
	char rua[40], bairro[40], complemento[20];
	int numero[20];
};

struct pedido_cliente
{
	int ddd, sabor;
	long int tel = 1;
	struct endereco_entrega endereco;
	char refrigerante;
}pedido;

float calculo_preco(int sabor, char refri)
{
	if (sabor == 1)
	{
		precosa = 20;
	}
	else if (sabor == 2)
	{
		precosa = 25;
	}
	else if (sabor == 3)
	{
		precosa = 27;
	}
	else
	{
		precosa = 35;
	}
	
	if ((refri == 's' ) || (refri == 'S'))
	{
		precorefri = 5;
	}
	else
	{
		precorefri = 0;
	}
	
	return (precorefri + precosa);
}

main()
{
	setlocale (LC_ALL,"Portuguese");
	while (pedido.tel != 0)
	{
		fflush (stdin);
		printf ("Bem vindo a pizzaria delivery! Digite seus dados para realizar o pedido: \n");
		fflush (stdin);
		printf ("Digite a sua rua: ");
		fgets (pedido.endereco.rua, 40, stdin);
		fflush (stdin);
		printf ("Digite o seu bairro: ");
		fgets (pedido.endereco.bairro, 40, stdin);
		fflush (stdin);
		printf ("Digite o número da casa: ");
		scanf ("%d", &pedido.endereco.numero);
		fflush (stdin);
		printf ("Digite o complemento ou ponto de referência: ");
		fgets (pedido.endereco.complemento, 40, stdin);
		fflush (stdin);
		printf ("Escolha seu sabor, digite 1 para muzzarela(R$ 20), 2 para presunto(R$ 25), 3 para calabresa(R$ 27), 4 para camarão(R$ 35): ");
		scanf ("%d", &pedido.sabor);
		fflush (stdin);
		printf ("Deseja refrigerante(R$ 5)? Digite [s] para sim e [n] para não: ");
		scanf ("%c", &pedido.refrigerante);
		fflush (stdin);
		printf ("Digite o ddd do seu número: ");
		scanf ("%d", &pedido.ddd);
		fflush (stdin);
		printf ("Digite seu número: ");
		scanf ("%li", &pedido.tel);
		
		printf ("\nO total do seu pedido foi de: %.2fR$", calculo_preco(pedido.sabor, pedido.refrigerante));
		printf ("\n");
		printf ("=============================================================================================");
		printf ("\n");
	}
}
