#include <stdio.h>

int main ()
{
	float salarioinicial;
	
	printf ("digite o salario inicial\n R$ ");
	scanf ("%f", &salarioinicial);
		printf ("\n");
	
	//calcula o salario com acrescimo
	float acrescentado = salarioinicial * 0.15;
	float salarioacrescentado = salarioinicial + acrescentado;
	
	
	//calcula o salario final com impostos
	float impostos = salarioacrescentado * 0.08;
	float salariofinal = salarioacrescentado - impostos;
	
		
	printf (" salario inicial: R$ %.2f\n acrescentado: R$ %.2f\n salario final com impostos: R$ %.2f\n\n", salarioinicial, salarioacrescentado, salariofinal);
	
	system ("pause");
	return 0;
}
