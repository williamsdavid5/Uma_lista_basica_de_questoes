#include <stdio.h>

int main ()
{
	int algarismos = 0;
	int contador = 0;
	
	while (contador < 8)
	{
		//recebe o numero
		int numero;
		printf ("digite um numero inteiro:\n");
		scanf("%i", &numero);
			printf("\n");
		
		if (numero < 0)                     //se  numero for negativo
		{
			algarismos = algarismos +1;     //sera resgistrado 
		}
		
		contador = contador + 1;
	}
	
	printf ("negativos: %i\n\n", algarismos);
	
	system ("pause");
	return 0;
}
