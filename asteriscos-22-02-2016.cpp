#include <stdio.h>
#include <stdlib.h>

//Funçao para escrever x asteriscos
void asteriscos(int x)
{
	//Escrever x linhas
	for(int i = 0; i < x; i++)
	{
		for(int b = 0; b <= i; b++)
		{
			printf("*");
		}		
		printf("  ");		
		for(int c = x; c > i; c--)
		{
			printf("*");	
		}
		printf("\n");
	}
}

main()
{
	int x;
	printf("\nDigite a quantidade de linhas: ");
	scanf("%d", &x);
	asteriscos(x);
}
