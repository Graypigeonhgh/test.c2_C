#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//5�����ݽ̲��е�����7-13����д��������ʵ��1)ÿ��ѧ����ƽ���ɼ���2����ÿ�ſε�ƽ���֣�
//3���ҳ���߷ֶ�Ӧ��ѧ���Ϳγ̣�Ҳ�����кź��кţ�
//�Զ�����ѧ��ƽ���ֺ���
void aver(int arr[3][3]) {
	int i = 0;
	int j = 0;
	float sum = 0;
	for ( i = 0; i < 3; i++) {
		for ( j = 0; j <3; j++) {
			sum += arr[i][j];
		}
		float a = sum / 3.0;
		printf("��%d��ͬѧ��ƽ���ɼ�Ϊ:%f\n", i + 1, a);
	}
}

//�Զ�����ѧ��ÿ�ſγ�ƽ���ֺ���
void aver1(int arr[3][3]) {
	int i = 0;
	int j = 0;
	float sum = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			sum += arr[j][i];
		}
		float a = sum / 3.0;
		printf("��%d�ſγ̵�ƽ����Ϊ:%2.2f\n", i + 1, a);
	}
}

//�Զ�������߷ֵ�ѧ���Ϳγ�
void max(int arr[3][3]) {
	int i = 0;
	int j = 0;
	int max1 = arr[0][0];
	for ( i = 0; i < 3; i++) {
		for ( j = 0; j < 3; j++) {
			if (max1 < arr[i][j]) {
				max1 = arr[i][j];
			}
		}
	}
	printf("��߷�%d��ѧ��Ϊ��%d,��Ӧ�Ŀγ�Ϊ��%d\n", max1, i , j );

}

int main() {
	int arr[3][3];
	printf("������3��ѧ��3�Ƶĳɼ�\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	aver(arr);
	aver1(arr);
	max(arr);

	return 0;
}