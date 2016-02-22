#include <stdio.h>
#include <stdlib.h>
//Funçao para elevar o numero 
int elevar(int quadrado, int x){
	int s = x;
	for(int b = 1; b < quadrado; b++)
	{
		s = s * x;
	}
	return s;	
}
//Funçao para calcular o valor de S
void resultado(int max, int x)
{
	system("cls");
	float s, elevado, divisor = 1;
	int quadrado = 1;
	//
	for(int i = 0; i <= max; i++)
	{
		elevado = elevar(quadrado, x);		
		s = s + elevado/divisor;
		quadrado++;
		divisor = divisor + 2;		
	}
	printf("S = %.2f", s);
}

main()
{
	int max, x;	
	printf("Digite o valor X: ");
	scanf("%d", &x);
	printf("\nDigite o numero maximo de calculos: ");
	scanf("%d", &max);	
	resultado(max, x);	
}
