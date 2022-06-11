#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0, w = 0;
	while (scanf("%d%d", &q, &w) != EOF)
	{
		if (!(w - 2))
		{
			if (!(q % 4) && q % 100)
			{
				printf("29\n");
			}
			else if (!(q % 400))
			{
				printf("29\n");
			}
			else
			{
				printf("28\n");
			}
		}
		else
		{
			if (w < 8)
			{
				if (!(w % 2))
				{
					printf("30\n");
				}
				else
				{
					printf("31\n");
				}
			}
			else
			{
				if (!(w % 2))
				{
					printf("31\n");
				}
				else
				{
					printf("30\n");
				}
			}
		}
	}
	return 0;
}