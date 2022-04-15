#include <stdio.h>

int main()
{
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
			{
				printf("%c", ((i + j) % 2) ? '*' : 'o');
			}

			printf("\n");
	}

	return 0; 
}