#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int i = 20;		//���ڴ��п���һ���ռ�
	int* p = &i;	//ʹ��&������ȡ��i�ĵ�ַ������ַ�����p�����У���ʱp����һ��ָ�����

	printf(" % d\n % p\n", i, p);
	printf(" % d\n ", sizeof(int*));
	printf(" %d\n ", sizeof(char*));
	printf(" %d\n ", sizeof(double*));


	return 0;
}