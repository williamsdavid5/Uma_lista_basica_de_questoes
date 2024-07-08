#include <stdio.h>

int main ()
{
	int sanduiches;
	
	//recebe a quantidade desejada de sanduiches
	printf ("digite a quantidade de sanduiches desejada:\n ");
	scanf ("%i", &sanduiches);
		printf ("\n");
	
	
	//calcula os pesos de cada produto
	float pesodoqueijo = (float) (sanduiches * 100)/1000;
	float pesodopresunto = (float) (sanduiches * 50)/1000;
	float pesodohamburguer = (float) (sanduiches * 100)/1000;
	
	//imprime os pesos 
	printf (" %.2f KG de queijo\n %.2f KG de presunto\n %.2f KG de carne\n\n", pesodoqueijo, pesodopresunto, pesodohamburguer);
	
	system ("pause");
	return 0;
}
