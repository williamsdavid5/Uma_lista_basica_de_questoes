#include <stdio.h>

int main ()
{
	char sexo;
	int contador = 0;
	int somamulheres =0;
	int somaidadehomens =0;
	int somahomens =0;
	int somapercentual =0;
	int totalpessoas =0;
	float somaaltura =0;
	
	int idade;
	float altura;
	
	int somaidade =0;
	int maioridade =0;
	int menoridade =0;
	
	//l� a meta de habitantes a serem entrevistados
	//(no caso da quest�o 21, s�o 1000 habitantes, por�m para fazer os testes do programa ser� possivel digitar um valor menor sem alterar o codigo)
	int habitantes;
	printf("digite o numero de habitantes a serem entrevistados: ");
	scanf("%i", &habitantes);
	
	while (contador < habitantes)
	{
		//l� o sexo
		printf ("\npessoa %i", contador+1);
		printf("\ndigite o sexo: ");
		scanf(" %c", &sexo);
		
		//verifica se a entrada do sexo � inv�lida
		if (sexo != 'm' && sexo != 'f' && sexo != 'M' && sexo != 'F')
		{
			printf("sexo invalido ");
			while (sexo != 'm' && sexo != 'f' && sexo != 'M' && sexo != 'F')
			{
				printf("digite novamente: ");
				scanf(" %c", &sexo);
			}
		}
		
		//l� a idade
		printf("digite a idade: ");
		scanf("%i", &idade);
		
		//l� a altura
		printf("digite a altura: ");
		scanf("%f", &altura);
		
		somaidade = somaidade + idade;
		
		if (contador == 0) //se for a primeira pessoa lida
		{
			maioridade = idade;
			menoridade = idade;
		}
		else //se n�o for a primeira pessoa lida
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
		
		if (sexo == 'f' || sexo == 'F') //se o sexo for feminino
		{
			somamulheres = somamulheres + 1;
			somaaltura = somaaltura + altura;
		}
		else
		{
			if (sexo == 'm' || sexo == 'M') //se o sexo for masculino
			{
				somaidadehomens = somaidadehomens + idade;
				somahomens = somahomens + 1;
			}
		}
		
		if (idade >= 18 && idade <= 35) //se a idade for entre 18 e 35 anos
		{
			somapercentual = somapercentual + 1;
		}
		
		totalpessoas = totalpessoas + 1;
		contador++;
	}
	
	//calcula todas as medias e percentual
	float mediaidade = (float)somaidade/totalpessoas;
	float mediaidadehomens = (float)somaidadehomens/somahomens;
	float mediaalturamulheres = (float)somaaltura/somamulheres;
	float percentual = (float)(somapercentual*100)/totalpessoas;
	
	printf("\nmaior idade: %i\nmenor idade: %i\nmedia de idade: %.1f\n", maioridade, menoridade, mediaidade);
	printf("media de altura das mulheres: %.2f\nmedia de idade dos homens: %.1f\n", mediaalturamulheres, mediaidadehomens);
	printf("percentual de pessoas com idade entre 18 e 35 anos: %.2f porcento\n\n", percentual);
	
	system ("pause");
	return 0;
}
