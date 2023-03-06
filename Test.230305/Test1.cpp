#include <stdio.h>
//不带参数的宏定义：
#define P "%p\n"

//指针的类型决定了指针向前或向后走一步有多大距离
int main() {
	int n = 20;
	char* pc = (char*) & n;
	int* pi = &n;

	printf(P, &n);	//0000002FD0F5F4F4
	printf(P, pc);	//0000002FD0F5F4F4
	printf(P, pc+1);//0000002FD0F5F4F5-->char*类型向后走一个字节
	printf(P, pi+1);//0000002FD0F5F4F8-->int*类型向后走4个字节

	return 0;
}