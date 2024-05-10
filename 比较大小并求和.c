#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a1, a2, b1, b2, c, d, a;
	scanf("%d,%d,%d,%d", &a1, &a2, &b1, &b2);
	if (a1 >= a2)
		c = a2;
	else
		c = a1;
	if (b1 >= b2)
		d = b1;
	else
		d = b2;
	a = c + d;
	printf("%d", a);
	return 0;
}
