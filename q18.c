#include <stdio.h>

int main ()
{
	int multi =1, r =1, cont =1;
	
	//recebe o numero
	int numero;
	printf("digite o numero: ");
	scanf("%i", &numero);
		printf("\n");
	

	//caso seja numero par, cont ser� menor ou igual a zero, saindo assim do loop, caso impar, numero ser� igual a 1, saindo assim do loop	
	while (cont>0 && numero!=1)
	{
		multi = numero * (numero - 1);   //multiplica o numero atual pelo seu antecessor
		r = multi * r;                   //armazena a multiplica��o total
		numero  = numero - 2;            //remove duas unidades, sobrando o numero anterior ao antecessor (resultar� em 1 caso o numero seja �mpar, isso encerra o loop)
		cont = multi * numero;           //resultar� em 0 caso numero seja par, encerrando ent�o o loop
	}
	

	printf ("fatorial: %i\n\n", r);
	
	
	system ("pause");
	return 0;
}
