#include <stdio.h>
/*
	指针的类型决定对指针解引用操作有多大权限（能操纵几个字节），如char*的指针解引用能操作1个
	字节，int*的指针解引用你操作4个字节
*/
int main() {
	int arr[10] = { 0 };
	//int* p = arr;		//数组名就是首元素的地址
	char* p = (char*)arr;	//调试-窗口-内存：16进制两个数占一个字节，char*类型每次+1走一个字节
	int i = 0;
	for (i = 0; i < 10; i++) {
		*(p + i) = 1;
	}

	printf("%d\n", i);	//当i跳出循环时，i=10

	return 0;
}