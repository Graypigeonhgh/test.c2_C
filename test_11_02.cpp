#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*1����дһ��C���Գ�����1��printf��3���ֱ����������Ϣ����15�֣�
* **********
��ã�����
***********
*/

int main()
{
	printf("*************\n");
	printf(" ��ã����� \n");
	printf("*************\n");
	return 0;
}

//2������һ����дӢ���ַ�������ת����Сд�ַ����������15�֣�
int main()
{
	printf("������һ����дӢ���ַ�\n");
	char a;
	scanf("%c", &a);
	printf("%c", a + 32);
	return 0;
}

////3���������������������ֱ���͡����̡�����������������������Ǹ������������أ�����
int main()
{
	int a,b;
	scanf("%d,%d", &a, &b);
	printf("%d\n", a + b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);
	return 0;
}


////4������һ����λ�������������λ���������Сʱ�ͷ��ӣ�������������20��
int main()
{
	int a;
	printf("��������λ����:>");
	scanf("%d", &a);
	int hour = a / 60;
	int min = a % 60;
	printf("%d=%dСʱ%d����", a, hour, min);
	return 0;
}
//
//5������һ����λ�����������ĸ�λ��֮�Ͳ����������ɷ�������ֲ�ͬ����ʵ�֣�����30�֣�
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
	printf("��������λ����:>");
	scanf("%d", &a);
	b = a % 10;
	c = a / 10 % 10;
	d = a / 100 % 10;
	e = a / 1000 % 10;
	int sum = b + c + d + e;
	printf("%d", sum);
	return 0;
}