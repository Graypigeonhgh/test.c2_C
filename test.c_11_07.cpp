#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*2-2.Ȼ���Ǽ���(15)
�����ʽ : �����λ���ֱ�ʾ����ֹʱ�䡣��Ŀ��֤��ʼʱ�����ֹʱ����ͬһ���ڡ�
�������� : l120 110������� :1310
*/
int main()
{
	int b_time=0,minue=0,hour=0,e_time=0;//��ʼʱ�䣬����ķ��ӣ�Сʱ����ֹʱ��
	int a,b;
	scanf("%d %d",&b_time,&minue);
	a = b_time / 100 * 60 + b_time % 100 + minue;//�ܷ���,��1020 60=6080����
	hour = a / 60;//Сʱ��6080/60=11
	e_time = hour * 100 + a % 60;//��ֹʱ�䣬11*100+20=1120
	if(hour < 24&&hour>0)//��Χ��һ����
	{
		printf("%d", e_time);
	}
	else
	{
		printf("������һ�췶Χ��");
	}		
	return 0;
}