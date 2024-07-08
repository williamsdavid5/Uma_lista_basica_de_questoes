#include <stdio.h>

int main ()
{
	int multi =1, r =1, cont =1;
	
	//recebe o numero
	int numero;
	printf("digite o numero: ");
	scanf("%i", &numero);
		printf("\n");
	

	//caso seja numero par, cont será menor ou igual a zero, saindo assim do loop, caso impar, numero será igual a 1, saindo assim do loop	
	while (cont>0 && numero!=1)
	{
		multi = numero * (numero - 1);   //multiplica o numero atual pelo seu antecessor
		r = multi * r;                   //armazena a multiplicação total
		numero  = numero - 2;            //remove duas unidades, sobrando o numero anterior ao antecessor (resultará em 1 caso o numero seja ímpar, isso encerra o loop)
		cont = multi * numero;           //resultará em 0 caso numero seja par, encerrando então o loop
	}
	

	printf ("fatorial: %i\n\n", r);
	
	
	system ("pause");
	return 0;
}
