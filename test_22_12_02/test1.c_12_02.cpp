#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//3. ��һ��3*3����ת�ã����к��л���������������ͨ���Զ���һ������ʵ�֡�
	//�Զ���ת�ú���
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
	printf("ת�ú�\n");
	transposition(arr);
	return 0;
}