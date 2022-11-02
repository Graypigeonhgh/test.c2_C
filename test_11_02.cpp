#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*1、编写一个C语言程序，用1个printf和3个分别输出以下信息：（15分）
* **********
你好，广油
***********
*/

int main()
{
	printf("*************\n");
	printf(" 你好，广油 \n");
	printf("*************\n");
	return 0;
}

//2、输入一个大写英文字符，将其转换成小写字符并输出。（15分）
int main()
{
	printf("请输入一个大写英文字符\n");
	char a;
	scanf("%c", &a);
	printf("%c", a + 32);
	return 0;
}

////3、键盘输入两个整数，分别求和、求商、求余数，并输出结果（如果是浮点类型数据呢？）。
int main()
{
	int a,b;
	scanf("%d,%d", &a, &b);
	printf("%d\n", a + b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);
	return 0;
}


////4、输入一个三位整数，把这个三位整数换算成小时和分钟，并输出结果。（20分
int main()
{
	int a;
	printf("请输入三位整数:>");
	scanf("%d", &a);
	int hour = a / 60;
	int min = a % 60;
	printf("%d=%d小时%d分钟", a, hour, min);
	return 0;
}
//
//5、输入一个四位整数，求它的各位数之和并输出结果（可否采用两种不同方法实现）。（30分）
int main()
{
	int a = 0;
	int sum = 0;
	scanf("%d", &a);
	for (int i = 1; i <= 4; i++)
	{
		int b = a % 10;
		sum = sum + b;
		a=a / 10;
	}
	printf("%d\n", sum);
	return 0;
}


int main()
{
	int a,b,c,d,e;
	printf("请输入四位整数:>");
	scanf("%d", &a);
	b = a % 10;
	c = a / 10 % 10;
	d = a / 100 % 10;
	e = a / 1000 % 10;
	int sum = b + c + d + e;
	printf("%d", sum);
	return 0;
}