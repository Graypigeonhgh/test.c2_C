#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int  main()
{
	int a, b;
	float x, y;
	char c1, c2;
	scanf("a=%d b=%d", &a, &b);
	scanf("%f %e\n", &x, &y);
	scanf("%c %c", &c1, &c2);
	printf("\n%d %d %f %e %c %c ", a, b, x, y, c1, c2);//c1��ӡ������(ԭ���������ַ�֮�䲻�ܿո��س�)
	return 0;
}