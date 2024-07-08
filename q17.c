#include <stdio.h>

int main ()
{
	float mediap =0, somamedia =0;
	int qtdalunos =0;
	
	int cod;                                  //recebe o codigo do aluno
	printf("digite o codigo do aluno: ");
	scanf ("%i", &cod);
	
	float n1, n2, n3;
	
	while (cod > 0)                          //enquanto o codigo for maior que 0
	{
		//recebem as notas
		printf ("digite a nota 1: ");
		scanf("%f", &n1);
		
		printf("digite a nota 2: ");
		scanf("%f", &n2);
		
		printf("digite a nota 3: ");
		scanf("%f", &n3);
		
			printf("\n");
		
		
		if (n1 == n2 && n1 == n3) //se as notas forem iguais
		{
			mediap = n1;
		}
		else
		{
			if (n1 >= n2 && n1 >= n3) //se n1 for a maior
			{
				mediap = (float) (n1*4 + n2*3 + n3*3)/10; 
			}
			else
			{
				if (n2 >= n1 && n2 >= n3) //se n2 for a maior
				{
					mediap = (float) (n2*4 + n1*3 + n3*3)/10; 
				}
				else
				{
					mediap = (float) (n3*4 + n1*3 + n2*3)/10; //se n3 for a maior
				}
			}
		}
		
		if (mediap >= 5)
		{
			//caso a media seja maior ou igual a 5
			printf("Aluno: %i\n nota1: %.1f\n nota2: %.1f\n nota3: %.1f\n media: %.2f\n APROVADO!\n\n", cod, n1, n2, n3, mediap);
		}
		else
		{
			//caso a media nao seja maior ou igual a 5
			printf("Aluno: %i\n nota1: %.1f\n nota2: %.1f\n nota3: %.1f\n media: %.2f\n reprovado :( \n\n", cod, n1, n2, n3, mediap);
		}
		
		//registra a soma das medias e quantidade de alunos
		somamedia = somamedia + mediap;
		qtdalunos = qtdalunos + 1;
		
		//recebe o codigo do aluno novamente
		printf("digite o codigo de outro aluno: ");
		scanf("%i", &cod);
			printf("\n");	
	}
	
	//caso seja digitado um codigo negativo de primeira
	if (qtdalunos == 0)
	{
		qtdalunos = 1;
	}
	
	float media = (float) somamedia / qtdalunos; //calcula a media geral
	
	printf("\nmedia geral: %.2f\n\n", media);
	
	system ("pause");
	return 0;
}
