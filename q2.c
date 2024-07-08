#include <stdio.h>

int main ()
{
	float preco = 1;
	float dinheiro = 0;
	
	//recebe o preço e a quantidade de dinheiro disponivel
	printf("digite o preco da gasolina: R$ ");
	scanf("%f", &preco);
		printf("\n");
	
	printf("digite o seu dinheiro: R$ ");
	scanf("%f", &dinheiro);
		printf("\n");
	
	//faz a operação e mostra a quantidsd em litros
	float litros = (float) dinheiro / preco;
	printf("voce vai conseguir %.2f litros de gasolina\n\n", litros);

	system ("pause");
	return 0;
}
