#include <stdio.h>

int main ()
{
	float soma =0;
	int contador =0;
	
while (contador < 5)
{
	//recebe base e altura
	float base, altura;
	printf ("triangulo %i\ndigite a base: ", contador+1);
	scanf("%f", &base);
	printf("digite a altura: ");
	scanf("%f", &altura);
	
	//calcula a area
	float area = (float)(base*altura)/2;
	soma = soma + area;
	contador = contador + 1;
	printf("area: %.2f\n\n", area);

}
	
	float media = (float) soma / contador;    //calcula a media da area
	
	printf("media: %.2f\n\n", media);
	
	system ("pause");
	return 0;
}
