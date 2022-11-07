#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*2-2.然后是几点(15)
输出格式 : 输出四位数字表示的终止时间。题目保证起始时间和终止时间在同一天内。
输入样例 : l120 110输出样例 :1310
*/
int main()
{
	int b_time=0,minue=0,hour=0,e_time=0;//起始时间，输入的分钟，小时，终止时间
	int a,b;
	scanf("%d %d",&b_time,&minue);
	a = b_time / 100 * 60 + b_time % 100 + minue;//总分钟,如1020 60=6080分钟
	hour = a / 60;//小时，6080/60=11
	e_time = hour * 100 + a % 60;//终止时间，11*100+20=1120
	if(hour < 24&&hour>0)//范围在一天内
	{
		printf("%d", e_time);
	}
	else
	{
		printf("不在这一天范围内");
	}		
	return 0;
}