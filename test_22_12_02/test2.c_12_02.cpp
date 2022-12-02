#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define row 3
#define line 3
//设计一个程序实现两个矩阵的相加，并显示出结果
void add(int arr1[row][line],int arr2[row][line]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%-3d",arr1[i][j]+arr2[i][j]);
		}
		printf("\n");
	}

}
int main() {
	int arr1[row][line];
	int arr2[row][line];
	printf("请输入第一个数组\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr1[i][j]);
		}
	}

	printf("请输入第二个数组\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr2[i][j]);
		}
	}
	add(arr1,arr2);
	return 0;
}