#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//1.计算并输出1+1/2+......+1/50 的值
	int i = 0;
	double sum = 0.0;
	for (i = 1; i <= 50; i++)
	{
		sum += 1.0/ i;
	}
	printf("%lf\n\n", sum);


	//2.编写程序输出所有的水仙花数。(水仙花数是三位正整数，其各位数字的立方和等于该正整数，
	//如：407=4*4*4+0*0*0+7*7*7)(用while和do  while分别实现)
	int num=100;
	int a, b, c;
	//while语句，先判断，在执行
	while (++num < 1000)//先++，后比较（若是num++，则范围会包括1000）
	{
		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;

		if (num == a * a * a + b * b * b + c * c * c)
		{
			printf("%d\n", num);
		}
	}

	do//do while语句，先执行，后判断
	{
		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;

		if (num == a * a * a + b * b * b + c * c * c)
		{
			printf("%d\n", num);
		}

	//} while (++num < 1000);


	//3. 用for循环输出以下45矩阵。
	int arr[4][5];
	int a = 1, b = 2,c=3,d=4;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)//遍历输入
		{
			if (i == 0)
			{
				arr[i][j] = a;
				a++;
			}
			else if(i==1)
			{
				arr[i][j] = b;
				b += 2;
			}
			else if (i == 2)
			{
				arr[i][j] = c;
				c += 3;
			}
			else
			{
				arr[i][j] = d;
				d += 4;
			}

		}
	}
	for (int i = 0; i < 4; i++)//遍历数组
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%-3d", arr[i][j]);
		}
		printf("\n");
	}


	return 0;
}
