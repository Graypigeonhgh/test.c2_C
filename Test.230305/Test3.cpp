#include <stdio.h>
#define NUM 5
int main() {
	int arr[10]{ 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;	//p=数组首元素地址值
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d,", *p);
		p += 1;
		//等于p++;
	}


	float values[NUM];
	float* vp;
	//指针加减整数，指针的关系运算
	for (vp = &values[0]; vp < &values[NUM];) {
		*vp++ = 0;	//先赋值，再加加
	}
	return 0;
}