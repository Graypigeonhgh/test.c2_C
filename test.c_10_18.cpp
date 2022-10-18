#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <vcruntime.h>

//goto语句的使用
int main()
{
	printf("hello world\n");
	goto again;
	printf("你好\n");
again:
	printf("hehe\n");
	return 0;
}

//编写代码模拟用户登录情景；并且只能登录三次（只允许输入三次密码，如果密码正确则提示登录
//成功，若均错误，则退出程序）
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}	
	if (i == 3)
	{
		printf("三次密码均错误，退出程序\n");
	}
	return 0;
//}


//关机代码(法1）
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意，电脑将在1分钟后关机，如果输入：##.就取消关机\n请输入>:");
	scanf("%s", input);
	if (strcmp(input, "##") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}


int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("......");
		scanf("%s", input);
		if (strcmp(input, "##") == 0);
		{
			system("shutdown - a");
			break;
		}
	}
	return 0;
}


//strcpy“字符串拷贝”的使用
int main()
{
	char arr1[] = "bit";
	char arr2[] = "#####";
	strcpy(arr2, arr1);
	printf("%s\n", arr2);//将arr1中的字符串剪切入arr2（会将\n也拷贝过去）
	printf("%s\n", arr1);
	return 0;
}


memset(memory set,内存设置）的使用
int main()
{
	char arr[] = "hello world";
	memset(arr,"*",5);
	printf("%s\n", arr);
	return 0;

}



int main()
{
	float a = 2, b = 4, h = 3;
	printf("%f\n", (1 / 2.0) * (a + b) * h);
	printf("%f\n", (1 / 2) * (a + b) * h);		return 0;	
}
