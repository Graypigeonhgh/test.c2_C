#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//ʵ�����β�
//����
void swap(int x, int y)
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d  b=%d\n", a, b);
	swap(a, b);
	printf("a=%d  b=%d\n", a, b);
	return 0;
}

//��ȷ
void swap2(int*pa, int*pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa= *pb;
	*pb= tmp;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d  b=%d\n", a, b);
	swap2(&a, &b);//���ú�������ַ����
	printf("a=%d  b=%d\n", a, b);
	return 0;
}


//һ�������ǡ�õ�����������֮�ͣ��������Ϊ��������������6=1+2+3������ҳ�1000���ڵ���������
int main()
{
	int i ,a;
	for (i = 1; i < 1000; i++)
	{
	    int sum = 0;
		for (a=1;a < i;a++)
		{
			if (i % a == 0)
			{
				sum = sum + a;
			}
		}
		if (i == sum)
		{
			printf("%d\n", i);
		}

	}
	return 0;
}