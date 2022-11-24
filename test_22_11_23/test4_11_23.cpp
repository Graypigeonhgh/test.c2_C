#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	float a;
	int d = 12, t = -345;
	a = 10000 / 3.0;
	printf("%f\n", a);
	printf("%-25.15f,%25.15f,\n", a, a);
	printf("%5d\n%5d\n", d, t);
	return 0;
}
//3333.333252
//3333.333251953125000, 3333.333251953125000,
//12
//- 345
