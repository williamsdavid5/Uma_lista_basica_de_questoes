#include <stdio.h>

int main ()
{
	int valor;
	
	printf("digite o valor a ser sacado: R$ "); //recebe o valor de saque desejado
	scanf("%i", &valor);
		printf("\n");
	
	int nota50 = 0;
	int nota10 = 0;
	int nota5 = 0;
	int nota1 = 0;
	
	int resto1 = valor % 50;           //verifica se poder�o ser entregues apenas notas de 50
	
	if (resto1 == 0) //se for possivel
	{
		nota50 = valor / 50;    //as notas de 50 ser�o entregues
	}
	else //se n�o for possivel
	{
		nota50 = valor - resto1;     //sera removido do valor o resto1 da divis�o
		nota50 = nota50 / 50;        //e as notas de 50 ser�o entregues
		
		int resto2 = resto1 % 10;    //verifica se o resto1 pode ser entregue apenas em notas de 10
		
		if (resto2 == 0) //se for possivel
		{
			nota10 = resto1 / 10; //as notas de 10 ser�o entregues
		}
		else //se n�o for possivel
		{
			nota10 = resto1 - resto2;   //sera removido do resto1 o resto2
			nota10 = nota10 / 10;       //e as notas de 10 ser�o entregues
			
			int resto3 = resto2 % 5;    //verifica se o resto 2 poder� ser entregue apenas em notas de 5
			
			if (resto3 == 0) //caso seja possivel
			{
				nota5 = resto2 / 5; //as notas de 5 ser�o entregues 
			}
			else //caso n�o seja possivel 
			{
				nota5 = resto2 - resto3;   //o resto ser� removido
				nota5 = nota5 / 5;         //as notas de 5 ser�o entregues
				nota1 = resto3;            //e o resto3 ser� entregue em notas de 1
			}
		}
	}
	
		
	printf (" notas de R$ 50: %i\n notas de R$ 10: %i\n notas de R$ 5: %i\n notas de R$ 1: %i\n\n", nota50, nota10, nota5, nota1);
	
	system ("pause");
	return 0;
}
