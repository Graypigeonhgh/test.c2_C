#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//实参与形参
//错误
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

//正确
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
	swap2(&a, &b);//调用函数，传址调用
	printf("a=%d  b=%d\n", a, b);
	return 0;
}


//一个数如果恰好等于它的因子之和，这个数称为“完数”。例如6=1+2+3，编程找出1000以内的所有完数
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