#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//2.��д����100������֮�ͣ�����1��3��5��...��99��
int main()
{
	int sum = 0;
	for (int i = 1; i < 100; i += 2) {
		sum += i;
	}
	printf("100������֮��Ϊ��%d\n", sum);
	return 0;
}