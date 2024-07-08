#include <stdio.h>

int main ()
{
	float basemaior;
	float basemenor;
	float altura;
	
	//recebe os valores a serem calculados
	printf("digite a base maior:\n");
	scanf("%f", &basemaior);
	printf ("\n");
	
	printf("digite a base menor:\n");
	scanf("%f", &basemenor);
	printf ("\n");
	
	printf("digite a altura:\n");
	scanf("%f", &altura);
	printf ("\n");
	
	//faz as operações
	float operacao1 = ((basemaior + basemenor)*altura);
	float area = (float) operacao1 / 2;
	
	//mostra a area
	printf ("a area deste triangulo e: %.2f\n\n", area);

	system ("pause");
	return 0;
}
