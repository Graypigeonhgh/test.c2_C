#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//1.���㲢���1+1/2+......+1/50 ��ֵ
	int i = 0;
	double sum = 0.0;
	for (i = 1; i <= 50; i++)
	{
		sum += 1.0/ i;
	}
	printf("%lf\n\n", sum);


	//2.��д����������е�ˮ�ɻ�����(ˮ�ɻ�������λ�����������λ���ֵ������͵��ڸ���������
	//�磺407=4*4*4+0*0*0+7*7*7)(��while��do  while�ֱ�ʵ��)
	int num=100;
	int a, b, c;
	//while��䣬���жϣ���ִ��
	while (++num < 1000)//��++����Ƚϣ�����num++����Χ�����1000��
	{
		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;

		if (num == a * a * a + b * b * b + c * c * c)
		{
			printf("%d\n", num);
		}
	}

	//do//do while��䣬��ִ�У����ж�
	//{
	//	a = num % 10;
	//	b = num / 10 % 10;
	//	c = num / 100;

	//	if (num == a * a * a + b * b * b + c * c * c)
	//	{
	//		printf("%d\n", num);
	//	}

	//} while (++num < 1000);


	//3. ��forѭ���������45����
	//int arr[4][5];
	//int a = 1, b = 2,c=3,d=4;
	//for (int i = 0; i < 4; i++)
	//{
	//	for (int j = 0; j < 5; j++)//��������
	//	{
	//		if (i == 0)
	//		{
	//			arr[i][j] = a;
	//			a++;
	//		}
	//		else if(i==1)
	//		{
	//			arr[i][j] = b;
	//			b += 2;
	//		}
	//		else if (i == 2)
	//		{
	//			arr[i][j] = c;
	//			c += 3;
	//		}
	//		else
	//		{
	//			arr[i][j] = d;
	//			d += 4;
	//		}

	//	}
	//}
	//for (int i = 0; i < 4; i++)//��������
	//{
	//	for (int j = 0; j < 5; j++)
	//	{
	//		printf("%-3d", arr[i][j]);
	//	}
	//	printf("\n");
	//}


	return 0;
}
