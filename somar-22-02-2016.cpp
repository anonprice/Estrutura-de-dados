#include <stdio.h>
#include <stdlib.h>
//Funçao para somar
void somar(int quantidade)
{
	system("cls");
	int x = 1, y = 1, final;
	for(int i = 0; i < quantidade; i++)
	{
			final = final + x/y;
			printf("%d/%d\n", x,y);
			x++;
			y++;
	}	
	printf("Resultado: %d", final);
}

main()
{
	int quantidade;
	printf("Digite a quantidade de calculos: ");
	scanf("%d", &quantidade);
	somar(quantidade);	
}
