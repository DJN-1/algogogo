#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0;

	scanf("%d", &a);


	for (int i = 0; i < a; i++)
	{
		printf("%d\n", i+1);
	}
}


