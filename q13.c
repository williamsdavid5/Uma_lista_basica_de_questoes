#include <stdio.h>

int main ()
{
	int numerosdentro =0;
	int numerosfora =0;
	int contador =0;
	int numero =0;
	
	while (contador < 10)
	{
		//rece o numero
		printf("digite o numero: ");
		scanf("%i", &numero);
		
		if ((numero >= 10) && (numero <= 20))    //verifica se o numero esta dento do intervalo
		{
			numerosdentro = numerosdentro + 1;   //registra, caso estiver
		}
		else
		{
			numerosfora = numerosfora + 1;       //registra, caso não estiver
		}
		
		contador = contador + 1;
	}
	
	printf ("\nnumeros dentro: %i\nnumeros fora: %i\n\n", numerosdentro, numerosfora);
	
	system ("pause");
	return 0;
}
