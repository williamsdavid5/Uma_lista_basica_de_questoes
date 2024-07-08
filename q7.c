#include <stdio.h>

int main ()
{
	float peso;
	
	printf ("digite seu peso:\n");
	scanf ("%f", &peso);
	 printf("\n");
	 
	float novopeso1 = (peso * 0.15) + peso; //peso acrescentando 15%
	float novopeso2 = peso - (peso * 0.20); //peso subtraindo 20%
	

	printf (" se engordar 15 porcento vai ter %.2f KG\n se emagrecer 20 porcento vai ter %.2f KG\n\n", novopeso1, novopeso2);
		
	system ("pause");
	return 0;
}
