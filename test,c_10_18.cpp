#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <vcruntime.h>

//goto����ʹ��
int main()
{
	printf("hello world\n");
	goto again;
	printf("���\n");
again:
	printf("hehe\n");
	return 0;
}

//��д����ģ���û���¼�龰������ֻ�ܵ�¼���Σ�ֻ���������������룬���������ȷ����ʾ��¼
//�ɹ��������������˳�����
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}	
	if (i == 3)
	{
		printf("��������������˳�����\n");
	}
	return 0;
//}


//�ػ�����(��1��
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬���Խ���1���Ӻ�ػ���������룺##.��ȡ���ػ�\n������>:");
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


//strcpy���ַ�����������ʹ��
int main()
{
	char arr1[] = "bit";
	char arr2[] = "#####";
	strcpy(arr2, arr1);
	printf("%s\n", arr2);//��arr1�е��ַ���������arr2���Ὣ\nҲ������ȥ��
	printf("%s\n", arr1);
	return 0;
}


memset(memory set,�ڴ����ã���ʹ��
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
