#include <stdio.h>

int main ()
{
	float nota1 =0;
	float nota2 =0;
	float nota3 =0;
	
	//recebe as notas
	printf ("digite a nota 1\n");
	scanf ("%f", &nota1);
	printf ("\n");

	printf ("digite a nota 2\n");
	scanf ("%f", &nota2);
	printf ("\n");
	
	printf ("digite a nota 3\n");
	scanf ("%f", &nota3);
	printf ("\n");
	
	float media = (float) (nota1*2 + nota2*3 + nota3*5)/10; //faz a operação
	printf ("a media ponderada e %.2f\n\n", media);         //mosta a média de notas do aluno
	
	system ("pause");
	return 0;
}
