#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//2.编写程序100内奇数之和，即求1＋3＋5＋...＋99。
int main()
{
	int sum = 0;
	for (int i = 1; i < 100; i += 2) {
		sum += i;
	}
	printf("100内奇数之和为：%d\n", sum);
	return 0;
}