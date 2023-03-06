#include <stdio.h>

typedef struct A {
	int a;
	char c;
	char arr[20];
	double d;
}Stu;
struct T {
	char ch[10];
	Stu A;	//Ç¶Ì×½á¹¹Ìå
	char* pc;
};

int main() {
	char arr[] = "hello world\n";
	struct T t = { "hello",{100,'a',"jane",3.14},arr};
	printf("%s\n", t.ch);
	printf("%s\n", t.A.arr);
	printf("%lf\n", t.A.d);

	return 0;
}