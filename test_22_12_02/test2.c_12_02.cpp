#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define row 3
#define line 3
//���һ������ʵ�������������ӣ�����ʾ�����
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
	printf("�������һ������\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr1[i][j]);
		}
	}

	printf("������ڶ�������\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr2[i][j]);
		}
	}
	add(arr1,arr2);
	return 0;
}