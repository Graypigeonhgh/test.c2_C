#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//编写代码，演示多个字符从两端移动，向中间汇聚
int main()
{
	char arr1[] = "welcome to bit!!";
	char arr2[] = "################";
	int left = 0;
	int right = strlen(arr1) - 1;下标=字符串长度-1
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//休息1秒
		system("cls");执行系统命令的函数：清空屏幕
		left++;
		right--;
	}
	printf("%s\n", arr2);最后清屏了，需重新打印
	return 0;

}

