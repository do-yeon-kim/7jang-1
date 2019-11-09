#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;

	for (x = 1; x < 6; x++)
	{
		for (y = 5; y >= x; y--)
		    printf("%d", y);
		printf("\n");
	}

	return 0;
}