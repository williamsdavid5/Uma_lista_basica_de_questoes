#include <stdio.h>

int main ()
{
	float chico = 1.50, ze = 1.10;
	int anos =0;
	
	printf("Ze mede: %.2fm de altura e Chico mede %.2fm de altura\nse passaram %i anos\n\n", ze, chico, anos);
	
	while (ze <= chico)
	{
		anos = anos + 1;
		ze = ze + 0.03;
		chico = chico + 0.02;
	}
	
	printf ("Ze mede: %.2fm de altura e Chico mede %.2fm de altura\nse passaram %i anos\n\n", ze, chico, anos);
	
	system ("pause");
	return 0;
}




