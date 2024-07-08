#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	int maioracidentes=0, menoracidentes=0, somaveiculos=0, contador=0, somaacidentesRs=0, somacidadesRs=0;
	int maioricidade, menoricidade;
	
	while (contador < 200)
	{
		//cria as variaveis e recebe os dados
		char estado[4];
		int city, acidentes, veiculos;
		
		printf("digite o codigo da cidade: ");
		scanf("%i", &city);
		
		printf("digite o estado: ");
		scanf("%s", &estado);
		
		printf("digite o indice de acidentes: ");
		scanf("%i", &acidentes);
		
		printf("digite o numero de veiculos na cidade: ");
		scanf("%i", &veiculos);
			printf("\n");
		

		if (contador == 0) //se for a primeira cidade lida
		{
			maioracidentes = acidentes; //o maior e o menor indice serão definidos igualmente
			menoracidentes = acidentes;
			maioricidade = city;
			menoricidade = city;
		}
		else //se não for a primeira cidade lida
			
			if (acidentes > maioracidentes) //verifica se o indice é o maior
			{
				maioracidentes = acidentes;
				maioricidade = city;
			}
			if (acidentes < menoracidentes) //verifica se o indice é o menor
			{
				menoracidentes = acidentes;
				menoricidade = city;
			}
		
		//verifica se o estado é o RS (com todas as variações da sigla caso o usuário digite errado)
		if (strcmp(estado, "rs")==0 || strcmp(estado, "Rs")==0 || strcmp(estado, "RS")==0 || strcmp(estado, "rS")==0)
		{
			somacidadesRs = somacidadesRs + 1;               //registra a quanidade de cidades do Rs
			somaacidentesRs = somaacidentesRs + acidentes;   //registra o total de acidentes em Rs
		}
		somaveiculos = somaveiculos + veiculos; //registra o total de veiculos
		contador = contador + 1;
	}
	
	float mediaveiculos = (float) somaveiculos / contador;      //media de veiculos
	float mediars = (float) somaacidentesRs / somacidadesRs;    //media de acidentes em Rs
	
	printf("\n maior indice: %i, cidade: %i\n menor indice: %i, cidade: %i\n", maioracidentes, maioricidade, menoracidentes, menoricidade);
	printf(" media de veiculos: %.2f\n media de acidentes em Rs: %.2f\n\n", mediaveiculos, mediars);
		
	system ("pause");
	return 0;
}
