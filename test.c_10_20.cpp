#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//��д���룬��ʾ����ַ��������ƶ������м���
int main()
{
	char arr1[] = "welcome to bit!!";
	char arr2[] = "################";
	int left = 0;
	int right = strlen(arr1) - 1;�±�=�ַ�������-1
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//��Ϣ1��
		system("cls");ִ��ϵͳ����ĺ����������Ļ
		left++;
		right--;
	}
	printf("%s\n", arr2);��������ˣ������´�ӡ
	return 0;

}

