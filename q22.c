#include <stdio.h>

int main ()
{
	int numero = 1; //define o inicio do intervalo
	
	while(numero < 20) //define o intervalo numerico desejado
	{
		if(numero == 1) //caso esteja lendo o numero 1
		{
			printf("%i e primo\n", numero);
		}
		else //caso esteja depois do numero 1
		{
			int primo = 1; //define verdadeiro (1) ou falso (0) para numeros primos (j� definido verdadeiro, caso o numero n�o seja primo, o valor � alerado futuramente)
			int cont = 2; //definido como 2, j� que os numeros primos s� podem ser divididos por 1 ou por eles mesmo
			int resto;
			
			while (cont < numero) //para n�o dividir o numero por ele mesmo
			{
				resto = numero % cont;
				
				if (resto == 0) //caso seje divis�vel
				{
					primo = 0; //primo � mudado para falso (0)
					cont = numero; //e contador recebe numero para sair imediatamente do loop
				}
				else //caso s�o seja divisivel
				{
					cont = cont + 1; //contador � somado (caso o numero seja primo, contador � somado at� se igualar ao numero, saindo assim do loop)
				}
			}
			
			if (primo == 1) //verifica se primo � verdadeiro
			{
				printf("%i  e primo\n", numero);
			}
		}
		
		numero = numero + 1; //vai para o numero sucessor
	}
	
	printf("\n");
	
	system ("pause");
	return 0;
}
