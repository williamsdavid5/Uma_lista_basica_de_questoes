#include <stdio.h>

int main ()
{
	float valortotal;
	
	//recebe o valor total da compra
	printf ("digite o valor total da compra: R$ ");
	scanf ("%f", &valortotal);
		printf ("\n");
	
	
	int parcelas = (int)(valortotal / 3);                   //calcula as parcelas para valores iguais e inteiros
	double resto = valortotal - ((double) parcelas * 3);    //calcula o resto removendo do total os valores inteiros das parcelas
	double entrada = parcelas + resto;                      //soma uma das parcelas com o resto, resultando assim no valor da entrada
	
	printf (" entrada: R$ %.2f\n parcelas: R$ %i.00\n\n", entrada, parcelas);
	
	system ("pause");
	return 0;
}
