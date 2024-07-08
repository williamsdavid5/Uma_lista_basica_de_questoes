#include <stdio.h>

int main ()
{
	float somasalario =0;
	int maioridade =0, menoridade =0, qtdmulheres =0, qtdpessoas =0;
	
	//recebe a idade
	int idade;
	printf("digite a idade: ");
	scanf("%i", &idade);
	
	while (idade > 0)
	{
		//recebe o sexo
		char sexo;
		printf("digite o sexo: ");
		scanf (" %c", &sexo);
		
		while (sexo!='m' && sexo!= 'f' && sexo!= 'M' && sexo!= 'F') //se sexo for diferente de M e F (maiúsculos ou minúsculos)
		{
			printf ("entrada de sexo invalida, digite novamente: ");
			scanf (" %c", &sexo);
		}
		
		//recebe salario
		float salario;
		printf("digite o salario: R$ ");
		scanf("%f", &salario);
		
		somasalario = somasalario + salario; //aramazena a soma do salario para a media
		
		if (qtdpessoas == 0) //se for a primeira pessoa lida
		{
			maioridade = idade;
			menoridade = idade;
		}
		else //se não for a primeira pessoa lida
		{
			if (idade > maioridade)
			{
				maioridade = idade;
			}
			
			if (idade < menoridade)
			{
				menoridade = idade;
			}
		}
		
		if (sexo=='f' && salario>=100) //se sexo for F e salario de ate R$ 100
		{
			qtdmulheres = qtdmulheres + 1;
		}
		
		qtdpessoas = qtdpessoas + 1; //armazena o total de pessoas lidas
		
		printf("\ndigite a idade novamente: "); //lê a idade novamente
		scanf("%i", &idade);
	}
	
	if (qtdpessoas == 0) //caso seja digitado uma idade negativa de primeira
	{
		qtdpessoas = 1;
	}
	
	float mediasalariogrupo = (float) somasalario / qtdpessoas;
	
	printf ("\n media de salario do grupo: R$ %.2f\n maior idade: %i\n menor idade %i\n qtd de mulheres com salario de ate R$ 100: %i\n\n", mediasalariogrupo, maioridade, menoridade, qtdmulheres);
	
	system ("pause");
	return 0;
}
