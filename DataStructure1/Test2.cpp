#include<stdio.h>
#include<stdlib.h>
using namespace std;	//释放C++提供的标准库的函数所在的命名空间（std)

/*
通过实验一中栈相关的部分可运行代码进行修改，实现元素1，2，3，4，5进栈，
出栈次序为2，1，5，4，3；实现应用txt文件读取实现进栈出栈功能，最后实现对应界面功能。
*/

#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define STACK_INIT_SIZE 100 //定义栈中元素的最大值
#define STACKINCREMENT 10   //扩容
 
typedef int Status;
typedef double SElemType;
typedef struct{
	SElemType *base;
	SElemType *top;
	int stacksize;
}SqStack;
 
Status InitStack(SqStack &S){
	S.base=(SElemType *)malloc(STACK_INIT_SIZE * sizeof(SElemType));
	//分配..个字节的存储区，并返回内存区地址（相当于创建一个容量为..的数组）
	if(!S.base)
		exit(OVERFLOW);
	S.top=S.base;	//栈底和栈顶指针指向同一块内存 
	S.stacksize=STACK_INIT_SIZE;
	return OK;
}//InitStack：栈的初始化(建栈)

Status DestroyStack(SqStack &S){
	free(S.base);		//释放s.base所指的空间
	S.base=S.top=NULL;  //释放后一定要指向NULL，避免出现野指针 
	S.stacksize=0;
	return OK; 
}//DestroyStack://销毁栈s,s不再存在

double GetTop(SqStack S){
	if(S.top==S.base)	//读取前判断是否为空栈
		return ERROR;
	SElemType e=*(S.top-1);
	return e;
}//GetTop：读栈顶元素

Status Push(SqStack &S,SElemType e){
	if(S.top-S.base>=S.stacksize){	//进栈前判断是否栈满
		S.base=(SElemType *)realloc(S.base,(S.stacksize+STACKINCREMENT) * sizeof(SElemType));
		//扩容：将base所指的内存区改为...
		if(!S.base)
			exit(OVERFLOW);
		S.top==S.base+S.stacksize;
		S.stacksize+=STACKINCREMENT;
	}
	*S.top++=e;
	return OK;
}//Push://进栈：插入元素e为新的栈顶元素。

Status Pop(SqStack &S,SElemType &e){
	if(S.top==S.base)	//出栈前判断是否为空栈
		return ERROR;
	e=*--S.top;
	return OK;
}//Pop://删除S的栈顶元素，并用e返回其值。

Status StackEmpty(SqStack S){
	if(S.top==S.base)
		return OK;
	else return ERROR;
}//StackEmpty:判空


void conversion(SqStack S){
	int a1,a2,a3,a4,a5;
	double b;
	printf("请输入要进栈的数：") ; 
    scanf("%d,%d,%d,%d,%d",&a1,&a2,&a3,&a4,&a5);
		Push(S,a1);
		Push(S,a2);

	printf("出栈数为："); printf("\n");
	while(!StackEmpty(S)){
		Pop(S,b);	printf("%d",(int)b);printf("\n");
		Pop(S,b);	printf("%d",(int)b);printf("\n");
	}	
    Push(S,a3);
    Push(S,a4);
    Push(S,a5);	
    Pop(S,b);	printf("%d",(int)b);printf("\n");	
    Pop(S,b);	printf("%d",(int)b);printf("\n");	
    Pop(S,b);	printf("%d",(int)b);printf("\n");
}//conversion：进栈出栈

int main(){
	SqStack St;
    printf("      |****进栈出栈***|\n");
    InitStack(St);		//建栈
	conversion(St);		//数制转换
	DestroyStack(St);	//销毁栈
}
