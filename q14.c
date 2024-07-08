#include <stdio.h>

int main ()
{
	float somasalario =0;
	int somafilhos =0;
	int somapercentual =0;
	float maiorsalario =0;
	int totalpessoas =0;
	
	//recebe o salario
	float salario;
	printf("digite o salario: R$ ");
	scanf("%f", &salario);
	
	while (salario >= 0)
	{
		if (salario > maiorsalario)
		{
			maiorsalario = salario; //armazena o maior salario
		}
		
		if (salario >= 100)
		{
			somapercentual = somapercentual + 1; //soma as pessoas com salario de ate R$ 100
		}
		
		somasalario = somasalario + salario;
		
		//lê e armazena aquantidae de filhos e faz a soma
		printf ("digite a quantidade de flhos: ");
		int filhos;
		scanf ("%i", &filhos);
		somafilhos = somafilhos + filhos;
			printf("\n");
		
		//lê novamente o salario
		printf("digite o salario novamente: R$ ");
		scanf("%f", &salario);
		
		totalpessoas = totalpessoas + 1; //armazena o total de pessoas
	}
	
	if (totalpessoas == 0) //verifica se o primeiro numero digitado foi negativo
	{
		totalpessoas = 1;
	}
	
	//calcula as medias e percentual
	float mediasalario = (float) somasalario / totalpessoas;
	float mediafilhos = (float) somafilhos / totalpessoas;
	float percentual = (float) (somapercentual*100)/totalpessoas;
	
	//mostra as medias, percentual e maior salario
	printf ("\n media do salario da populacao: %.2f\n media do numero de filhos: %.2f\n maior salario: R$ %.2f\n percentual de pessoas com o salario de ate R$ 100: %.1f porcento\n\n", mediasalario, mediafilhos, maiorsalario, percentual);
	
	system ("pause");
	return 0;
}













