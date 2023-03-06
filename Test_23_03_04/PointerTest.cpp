#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int i = 20;		//在内存中开辟一个空间
	int* p = &i;	//使用&操作符取出i的地址，将地址存放在p变量中，此时p就是一个指针变量

	printf(" % d\n % p\n", i, p);
	printf(" % d\n ", sizeof(int*));
	printf(" %d\n ", sizeof(char*));
	printf(" %d\n ", sizeof(double*));


	return 0;
}