#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1. д����������n�Ľ׳ˣ�������n!���������ޡ�Ҫ��n��ֵͨ���������롣
//��ʾ��ע��n�ķ�Χ��
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

