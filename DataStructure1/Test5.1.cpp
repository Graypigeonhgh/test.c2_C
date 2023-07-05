#include <iostream>
#include <iomanip>
#include <fstream>
#include<string.h>
using namespace std;

/*
完成数据txt文件输出，尝试实现一行一行的写到txt文件。
*/

int main() 
{
	ofstream outf;    //用ofstream类定义输入对象
	outf.open("logger.txt");  //文件绝对路径（注意双斜杠取消转义）
	outf<<"I am DB"<<endl;    
	outf<<"I like learning"<<endl;   //写入内容
	outf.close();
}