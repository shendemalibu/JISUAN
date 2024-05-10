
#include <stdio.h>
int main()
{
	int scf(int x);
	int a, i, h = 0;
	scanf("%d", &a);
	if (a < 3 || a>10)
		printf("error\n");
	else
	{
		for (i = 0; i <= 5; i++)
			h += scf(a + 3 * i);
		printf("%d\n", h);
	}
	return 0;
}
int scf(int x)
{
	return x * x * x * x;
}
