#include <stdio.h>

int main ()
{
	int ca =0, cb =0, cc =0, nulo =0, branco =0;
	
	
	//recebe o voto
	int voto;
	printf ("digite seu voto: \n");
	scanf ("%i", &voto);
		printf ("\n");
	
	while (voto != 0) //enquanto o voto for diferente de 0
	{
		if ((voto < 0) || (voto > 5))
		{
			printf ("digito invalido, tente novamente\n"); //sera mostrado caso o voto não seja valido
		}
		
		switch (voto) //para verificar o voto
		{
			case 1:
				ca = ca + 1; //caso o voto seja 1, candidato a recebe 
				break;
				
			case 2:
				cb = cb + 1;
				break;
				
			case 3:
				cc = cc + 1;
				break;
			
			case 4:
				nulo = nulo + 1;
				break;
				
			case 5:
				branco = branco + 1;
				break;
			
		}
		
		printf ("digite seu voto: \n"); //recebe o voto novamente
		scanf ("%i", &voto);
			printf("\n");
	}
	
	printf ("\nCONTAGEM DE VOTOS\n\ncandidato A = %i\ncandidato B = %i\ncandidato C = %i\nnulo = %i\nbranco = %i\n\n", ca, cb, cc, nulo, branco);
	
	system ("pause");
	return 0;
}
