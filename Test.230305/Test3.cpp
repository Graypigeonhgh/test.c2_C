#include <stdio.h>
#define NUM 5
int main() {
	int arr[10]{ 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;	//p=������Ԫ�ص�ֵַ
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d,", *p);
		p += 1;
		//����p++;
	}


	float values[NUM];
	float* vp;
	//ָ��Ӽ�������ָ��Ĺ�ϵ����
	for (vp = &values[0]; vp < &values[NUM];) {
		*vp++ = 0;	//�ȸ�ֵ���ټӼ�
	}
	return 0;
}