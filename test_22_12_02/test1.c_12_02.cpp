#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//3. 将一个3*3矩阵转置（即行和列互换）后输出结果，通过自定义一个函数实现。
	//自定义转置函数
void transposition(int arr[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%-3d", arr[j][i]);
		}
		printf("\n");
	}
}

int main() {
	int arr[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	printf("转置后：\n");
	transposition(arr);
	return 0;
}