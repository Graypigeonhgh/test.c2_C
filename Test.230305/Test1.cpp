#include <stdio.h>
//���������ĺ궨�壺
#define P "%p\n"

//ָ������;�����ָ����ǰ�������һ���ж�����
int main() {
	int n = 20;
	char* pc = (char*) & n;
	int* pi = &n;

	printf(P, &n);	//0000002FD0F5F4F4
	printf(P, pc);	//0000002FD0F5F4F4
	printf(P, pc+1);//0000002FD0F5F4F5-->char*���������һ���ֽ�
	printf(P, pi+1);//0000002FD0F5F4F8-->int*���������4���ֽ�

	return 0;
}