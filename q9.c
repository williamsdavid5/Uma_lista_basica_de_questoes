#include <stdio.h>

int main ()
{
	float tempo;
	
	int horas =0, minutos =0, segundos =0;
	
	printf ("digite o tempo em minutos:\n\n");   //recebe o tempo em minutos
	scanf ("%f", &tempo);
		printf ("\n");
	
	
	//calcula o resto da divis�o antes de transformar em horas
	int aux = (int)(tempo/60);
	float resto1 = tempo - ((double) aux * 60);
	
	if (resto1 == 0) //caso n�o tenha resto
	{
		horas = tempo / 60; //o tempo � transformado em horas exatas
	 }
	 else //caso tenha resto
	 {
	 	horas = tempo - resto1;         //� removido do tempo o resto da divis�o
	 	horas = horas / 60;             //e calculado as horas 
	 	
		int segundosresto =  resto1 * 60;  //o resto das horas � transformado em segundos
		
		//antes de voltar a transformar em minutos, � calculado o resto2 
	 	int aux2 = (int)(segundosresto/60);
	 	float resto2 = segundosresto - ((double) aux2 * 60);
	 	
	 	if (resto2 == 0) //caso n�o tenha resto2
	 	{
	 		minutos = segundosresto / 60; //ser� transformado em minutos novamente
		 }
		 else //caso tenha resto2
		 {
		 	minutos = segundosresto - resto2;      //� removido o resto2
		 	minutos = minutos / 60;                //transformado em miutos
		 	segundos = resto2;                     //e o resto2 � dado aos minutos
		 }
	 }
	
	
	printf ("horas: %i, Minutos: %i, segundos: %i\n\n", horas, minutos, segundos);
	
	system ("pause");
	return 0;
}
