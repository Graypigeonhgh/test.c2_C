#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1. 写程序求整数n的阶乘，即计算n!，方法不限。要求：n的值通过键盘输入。
//提示：注意n的范围。
int main() 
{
	int n = 0;
	double sum = 1;
	scanf("%d", &n);
	for (int i = n; i > 0; i--){
		sum *= i;
	}
	printf("%lf\n", sum);
	return 0;
}

