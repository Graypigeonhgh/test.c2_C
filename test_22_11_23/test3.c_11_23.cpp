#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[90];
	int  len = 0, i;
	gets_s(s1);
	for (i = 0; s1[i] != '\0'; i++)
	{
		len++;
	}
	printf("len=%d\n", len);
	printf("%d", strlen(s1));
	return 0;
}


