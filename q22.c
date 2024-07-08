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
			int primo = 1; //define verdadeiro (1) ou falso (0) para numeros primos (já definido verdadeiro, caso o numero não seja primo, o valor é alerado futuramente)
			int cont = 2; //definido como 2, já que os numeros primos só podem ser divididos por 1 ou por eles mesmo
			int resto;
			
			while (cont < numero) //para não dividir o numero por ele mesmo
			{
				resto = numero % cont;
				
				if (resto == 0) //caso seje divisível
				{
					primo = 0; //primo é mudado para falso (0)
					cont = numero; //e contador recebe numero para sair imediatamente do loop
				}
				else //caso são seja divisivel
				{
					cont = cont + 1; //contador é somado (caso o numero seja primo, contador é somado até se igualar ao numero, saindo assim do loop)
				}
			}
			
			if (primo == 1) //verifica se primo é verdadeiro
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
