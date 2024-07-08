#include <stdio.h>

int main ()
{
	int tempo;
	
	printf ("digite o tempo em dias:\n"); //recebe o valor em dias
	scanf ("%i", &tempo);
		printf ("\n");
	
	
	int anos = 0;
	int meses = 0;
	int dias = 0;
	
	int resto1 = tempo % 360;                   //verifica se o valor resulta em anos exatos
	
	if (resto1 == 0)                            //caso o valor resulte em anos exatos
	{
		anos = (int) tempo / 360;               //sera dividido para descobrirmos quantos anos
	}
	else //caso nao resulte em anos exatos
	{
		anos = tempo - resto1;                     //sera tirado do valor o resto da divisao
		anos = (int) anos / 360;                   //depois sera divido para descobrirmos os anos
		
		
		int resto2 = resto1 % 30;                //o resto dos anos sera verifcado, assim podemos descobrir se teremos meses exatos
		
		if (resto2 == 0) //caso resulte em meses exatos
		{
			meses = (int) resto1 / 30;          //o resto dos anos sera dividido para descobrirmos os meses
		}
		else //caso não resulte em meses exatos
		{
			meses = resto1 - resto2;            //sera subtraido do resto dos anos o resto da divisão por 30, assim teremos o resultado em meses exatos
			meses = (int) meses / 30;           //divide por 30 o valor resultante
			dias = resto2;                      //dias recebe o resto dos meses, já que o resto são dias
		}
	}
	
	
	printf ("anos: %i, meses: %i, dias: %i\n\n", anos, meses, dias);
	
	system ("pause");
	return 0;
}
